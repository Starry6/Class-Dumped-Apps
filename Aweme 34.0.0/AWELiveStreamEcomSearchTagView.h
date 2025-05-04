@interface AWELiveStreamEcomSearchTagView : UIView
@property (nonatomic) UIStackView tagStackView;
@property (nonatomic) UILabel tagTextLabel;
@property (nonatomic) UIImageView tagIconImage;
- (id)tagStackView;
- (void)setTagStackView:;
- (id)tagIconImage;
- (id)tagTextLabel;
- (void)setTagWithText:andIcon:iconIsLeft:;
- (void)setTagTextLabel:;
- (void)setTagIconImage:;
- (id)intrinsicContentSize;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupViews;
@end
