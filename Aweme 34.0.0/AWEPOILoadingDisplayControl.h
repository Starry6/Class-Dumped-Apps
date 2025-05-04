@interface AWEPOILoadingDisplayControl : NSObject
@property (nonatomic) @? displayBlock;
@property (nonatomic) @? dismissBlock;
@property (nonatomic) BOOL isEnded;
@property (nonatomic) BOOL isDisplaying;
- (void)setIsDisplaying:;
- (void)setDisplayBlock:;
- (id)displayBlock;
- (id)initWithDisplayBlock:dismissBlock:;
- (void)showAfterDelay:;
- (void)p_showImp;
- (BOOL)isEnded;
- (void)setIsEnded:;
- (void)show;
- (void).cxx_destruct;
- (BOOL)isDisplaying;
- (void)finishLoading;
- (id)dismissBlock;
- (void)setDismissBlock:;
@end
