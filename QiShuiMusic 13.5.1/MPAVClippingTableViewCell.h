@interface MPAVClippingTableViewCell : UITableViewCell
@property (nonatomic) UIView clippingContentView;
@property (nonatomic) UIView clippingMaskView;
@property (nonatomic) {UIEdgeInsets=dddd} clippingInsets;
@property (nonatomic) UIView topSeparatorView;
@property (nonatomic) UIView bottomSeparatorView;
@property (nonatomic) BOOL shouldHideSectionBottomSeparator;
- (id)initWithStyle:reuseIdentifier:;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setAccessoryView:;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)_setShouldHaveFullLengthBottomSeparator:;
- (void)_setShouldHaveFullLengthTopSeparator:;
- (id)bottomSeparatorView;
- (id)topSeparatorView;
- (void)setClippingInsets:;
- (BOOL)shouldHideSectionBottomSeparator;
- (void)setShouldHideSectionBottomSeparator:;
- (id)clippingContentView;
- (void)setClippingContentView:;
- (id)clippingMaskView;
- (void)setClippingMaskView:;
- (id)clippingInsets;
@end
