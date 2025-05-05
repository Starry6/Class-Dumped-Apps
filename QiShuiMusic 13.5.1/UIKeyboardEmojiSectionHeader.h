@interface UIKeyboardEmojiSectionHeader : UICollectionReusableView
@property (nonatomic) NSString headerName;
@property (nonatomic) UIColor headerTextColor;
@property (nonatomic) double headerFontSize;
@property (nonatomic) double headerOpacity;
@property (nonatomic) BOOL useVibrantBlend;
- (void)layoutSubviews;
- (double)headerOpacity;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setHeaderName:;
- (id)headerName;
- (void)setHeaderTextColor:;
- (id)headerTextColor;
- (void)setHeaderFontSize:;
- (double)headerFontSize;
- (void)setHeaderOpacity:;
- (void)setUseVibrantBlend:;
- (BOOL)useVibrantBlend;
@end
