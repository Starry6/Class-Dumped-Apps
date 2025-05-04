@interface AWEPushSearchAnchorItemView : UIView
@property (nonatomic) BOOL isBgWhite;
@property (nonatomic) double itemWidth;
@property (nonatomic) double maxWidth;
@property (nonatomic) UILabel itemLabel;
@property (nonatomic) UIImageView backIcon;
- (BOOL)isBgWhite;
- (void)setIsBgWhite:;
- (void)updateUITheme:;
- (id)getBackIconImageWithIsBGColorWhite:;
- (void)setBackIcon:;
- (id)backIcon;
- (id)initWithModel:maxWidth:isBGWhite:;
- (void)setItemWidth:;
- (double)itemWidth;
- (double)maxWidth;
- (void)setMaxWidth:;
- (void).cxx_destruct;
- (id)itemLabel;
- (void)setItemLabel:;
- (void)updateWithModel:;
@end
