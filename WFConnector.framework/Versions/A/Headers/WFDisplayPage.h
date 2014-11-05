//
//  WFDisplayPage.h
//  WFConnector
//
//  Created by Murray Hughes on 16/12/12.
//  Copyright (c) 2012 Wahoo Fitness. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WFDisplayElement.h"

@interface WFDisplayPage: NSObject <NSCopying>
{
    NSString* _key;
    BOOL _hidden;
    NSString* _comment;
    
    @private
    NSMutableArray* _mutableElements;
    uint8_t _binaryKey;
    uint8_t _nextPageBinaryKey;
    uint8_t _previousPageBinaryKey;

    NSMutableArray* _errors;
}

// Key used to identify the page. This value must be unique to all other pages.
@property (nonatomic, copy) NSString* key;

@property (nonatomic, copy) NSString* soundKey;

// Sets if the page is hidden from normal page toggling function. Page can be manually shown via the API.
@property (nonatomic, assign, getter = isHidden) BOOL hidden;

// Array of dictionaries representing elements.
@property (nonatomic, readonly) NSArray* elements;

// String that can be used to store anything you want, not used internally
@property (nonatomic, copy) NSString* comment;

// Add element tot the display page
- (void) addElement:(WFDisplayElement*) element;
- (void) removeElement:(WFDisplayElement*) element;
- (void) removeAllElements;

@end