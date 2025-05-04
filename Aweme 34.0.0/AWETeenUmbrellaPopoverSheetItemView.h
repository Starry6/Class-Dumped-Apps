@interface AWETeenUmbrellaPopoverSheetItemView : UIView
@property (nonatomic) AWETeenUmbrellaPopoverSheetItem item;
@property (nonatomic) UIImageView icon;
@property (nonatomic) UIImageView arrowImage;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
- (void)p_setupGesture;
- (void)p_setupViews;
- (void)p_itemClick;
- (id)initWithSheetItem:;
- (id)icon;
- (void)setItem:;
- (void)setSubtitleLabel:;
- (id)item;
- (void)setTitleLabel:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)arrowImage;
- (void)setArrowImage:;
@end
