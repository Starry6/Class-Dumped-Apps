@interface AWEConcernFansToolEntranceView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIView yellowDot;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__addObservers;
- (void)__setupUI;
- (void)__addGestureRecognizer;
- (id)yellowDot;
- (void)__updateTitleLabelMasonry;
- (void)__enterFansTool;
- (void)__removeYellowDot;
- (void)__fansToolDidEnter;
- (void)setYellowDot:;
- (void)dealloc;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (id)arrowImageView;
- (void)setArrowImageView:;
+ (id)create;
@end
