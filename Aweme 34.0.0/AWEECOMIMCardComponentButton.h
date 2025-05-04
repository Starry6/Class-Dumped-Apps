@interface AWEECOMIMCardComponentButton : UIButton
@property (nonatomic) AWEECOMIMCardButtonActionModel actionModel;
@property (nonatomic) BOOL loading;
@property (nonatomic) double loadingTime;
- (id)actionModel;
- (void)setLoadingTime:;
- (void)setActionModel:;
- (double)loadingTime;
- (void)bindActionModel:;
- (id)initWithAction:;
- (void)onTap;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (BOOL)loading;
- (void)setLoading:;
+ (id)secondTextColor;
+ (id)buttonTitleColorDict;
+ (id)buttonBorderColorDict;
+ (id)defaultTitleColor;
@end
