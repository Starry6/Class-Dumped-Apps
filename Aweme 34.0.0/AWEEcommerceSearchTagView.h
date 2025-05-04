@interface AWEEcommerceSearchTagView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) AWEEcommerceSearchStyleLabel textView;
@property (nonatomic) {UIEdgeInsets=dddd} edgeInsets;
@property (nonatomic) AWEEcommerceSearchCommonTagModel tagModel;
- (void)setTagModel:;
- (id)tagModel;
- (id)textView;
- (id)intrinsicContentSize;
- (id)edgeInsets;
- (id)initWithFrame:;
- (id)iconView;
- (void)setEdgeInsets:;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)layoutSubviews;
@end
