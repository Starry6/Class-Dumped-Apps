@interface AWELongPressGuideManager : NSObject
@property (nonatomic) UIView guideView;
@property (nonatomic) @? finishBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showLongPressGuideIfNeededWithAweme:finishBlock:;
- (void)releaseGuideView;
- (void)longPressDetected:;
- (void)panDetected:;
- (void)tapDetected:;
- (void).cxx_destruct;
- (void)setFinishBlock:;
- (id)finishBlock;
- (id)guideView;
- (void)setGuideView:;
+ (id)sharedInstance;
@end
