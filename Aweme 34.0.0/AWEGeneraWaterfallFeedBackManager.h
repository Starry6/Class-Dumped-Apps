@interface AWEGeneraWaterfallFeedBackManager : NSObject
@property (nonatomic) BOOL showFeedBack;
- (BOOL)showFeedBack;
- (void)showFeedBackWithURL:aweModel:Anchor:topVew:extraParams:;
- (void)setShowFeedBack:;
+ (id)shareInstance;
@end
