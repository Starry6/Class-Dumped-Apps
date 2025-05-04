@interface AWEIMRecommendGreetContext : NSObject
@property (nonatomic) BOOL hasShownSlideUpHint;
@property (nonatomic) BOOL hasNegativeFeedBack;
@property (nonatomic) BOOL needCustomLongPress;
- (BOOL)hasShownSlideUpHint;
- (BOOL)needCustomLongPress;
- (void)setHasShownSlideUpHint:;
- (void)setNeedCustomLongPress:;
- (BOOL)hasNegativeFeedBack;
- (void)setHasNegativeFeedBack:;
@end
