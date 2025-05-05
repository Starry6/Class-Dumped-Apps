@interface BDPreloadDebugView : UIView
@property (nonatomic) UILabel finishLabel;
@property (nonatomic) UILabel runningLabel;
@property (nonatomic) UILabel pendingLabel;
@property (nonatomic) UILabel waitingLabel;
- (void)setFinishLabel:;
- (id)finishLabel;
- (id)pendingLabel;
- (id)runningLabel;
- (void)setPendingLabel:;
- (void)setRunningLabel:;
- (void)setWaitingLabel:;
- (id)waitingLabel;
- (id)init;
- (void).cxx_destruct;
- (void)_setup;
+ (BOOL)isIPhoneXSeries;
+ (id)createLabelWithColor:;
+ (BOOL)enable;
+ (id)sharedInstance;
@end
