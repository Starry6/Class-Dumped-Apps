@interface BDUGLuckyContainerViewInfo : NSObject
@property (nonatomic) NSString fullURL;
@property (nonatomic) BOOL enableLoadFailedView;
@property (nonatomic) BOOL viewAppeared;
@property (nonatomic) BOOL viewIsReady;
@property (nonatomic) BOOL viewPendingAppear;
@property (nonatomic) BOOL viewPendingBecomeActive;
- (BOOL)enableLoadFailedView;
- (void)setEnableLoadFailedView:;
- (void)setViewPendingAppear:;
- (void)setViewPendingBecomeActive:;
- (BOOL)viewPendingAppear;
- (BOOL)viewPendingBecomeActive;
- (id)fullURL;
- (void).cxx_destruct;
- (void)setFullURL:;
- (BOOL)viewAppeared;
- (void)setViewAppeared:;
- (BOOL)viewIsReady;
- (void)setViewIsReady:;
+ (id)createAndAttachViewInfoWithView:;
+ (id)viewInfoWithView:;
@end
