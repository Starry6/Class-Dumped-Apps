@interface AWESearchMerchandiseRecommendReasonItemView : UIView
@property (nonatomic) UIImageView leftIcon;
@property (nonatomic) UILabel content;
@property (nonatomic) UIImageView rightIcon;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseUserServiceInfoModel model;
- (void)setLeftIcon:;
- (void)setRightIcon:;
- (void)updateWithModel:maxWidth:;
- (double)itemCalculatedWidthWithText;
- (void)setModel:;
- (id)content;
- (id)initWithFrame:;
- (id)model;
- (void)setContent:;
- (void).cxx_destruct;
- (void)setUpViews;
- (id)leftIcon;
- (id)rightIcon;
@end
