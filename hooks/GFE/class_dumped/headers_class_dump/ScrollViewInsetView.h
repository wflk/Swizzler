//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIView.h"

@class UIScrollView;

@interface ScrollViewInsetView : UIView
{
    UIScrollView *_scrollView;
    float _scale;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void)didRotate:(id)arg1;
- (void)layoutSubviews;
- (void)addSubview:(id)arg1;
- (void)insertSubview:(id)arg1 atIndex:(int)arg2;
- (void)prepareViewForAdding:(id)arg1;
- (void)removeAllRows;
- (void)updateContentInset;
- (float)yOriginForHeight:(float)arg1;
- (void)layoutScrollView;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1;

@end

