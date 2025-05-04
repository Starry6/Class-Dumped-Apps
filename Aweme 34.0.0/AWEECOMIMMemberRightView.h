@interface AWEECOMIMMemberRightView : UIView
@property (nonatomic) NSMutableArray itemViews;
@property (nonatomic) UIStackView stackView;
- (void)updateWithMemberInfoModel:;
- (id)stackView;
- (void)setStackView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)itemViews;
- (void)setItemViews:;
+ (double)heightWithMemberInfoModel:;
+ (double)contentTopPadding;
@end
