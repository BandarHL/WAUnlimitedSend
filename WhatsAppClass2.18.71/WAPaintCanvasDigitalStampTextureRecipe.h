//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaintCanvasContentStampTextureRecipe.h"

__attribute__((visibility("hidden")))
@interface WAPaintCanvasDigitalStampTextureRecipe : WAPaintCanvasContentStampTextureRecipe
{
}

- (double)redrawInterval;
- (id)currentTimeAndPeriodSymbols;
- (id)textAttributesForFontSize:(double)arg1 forPeriod:(_Bool)arg2;
- (void)drawTimeInContext:(struct CGContext *)arg1 ofSize:(struct CGSize)arg2;
- (void)drawBackgroundInContext:(struct CGContext *)arg1 ofSize:(struct CGSize)arg2 backgroundImage:(id)arg3;
- (void)drawBackgroundManuallyInContext:(struct CGContext *)arg1 color:(id)arg2 rect:(struct CGRect)arg3 cornerRadius:(double)arg4;
- (void)drawClockInContext:(struct CGContext *)arg1 ofSize:(struct CGSize)arg2;
- (void)drawInContext:(struct CGContext *)arg1 ofSize:(struct CGSize)arg2;
- (id)initWithContent:(id)arg1;

@end
