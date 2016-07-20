//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIButton.h"

@interface SBTabsCounterButton : UIButton
{
    unsigned int _counter;
    unsigned int _maxCounter;
    struct UIEdgeInsets _hitTestInsets;
}

+ (id)getSelectedBackgroundImage;
+ (id)getBackgroundImage;
@property(nonatomic) struct UIEdgeInsets hitTestInsets; // @synthesize hitTestInsets=_hitTestInsets;
@property(nonatomic) unsigned int maxCounter; // @synthesize maxCounter=_maxCounter;
@property(nonatomic) unsigned int counter; // @synthesize counter=_counter;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithCounter:(unsigned int)arg1 maxCounter:(unsigned int)arg2;

@end
