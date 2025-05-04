@interface AWENearbyInnerFeedWidget : UIView
@property (nonatomic) NSString schema;
@property (nonatomic) UIView lynxView;
- (void)showOnView:;
- (id)lynxView;
- (void)setLynxView:;
- (void)hideView;
- (double)maxCenterYRight;
- (double)minCenterYRight;
- (double)maxCenterYLeft;
- (double)minCenterYLeft;
- (void)updatePosionWithTagertPosition:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithSchema:;
@end
