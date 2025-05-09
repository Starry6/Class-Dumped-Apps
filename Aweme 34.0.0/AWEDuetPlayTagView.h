@interface AWEDuetPlayTagView : UIView
@property (nonatomic) double cornerRadius;
@property (nonatomic) double maxWidth;
@property (nonatomic) double defaultFontSize;
@property (nonatomic) NSAttributedString title;
@property (nonatomic) UIColor fillColor;
@property (nonatomic) UIImage shapeImage;
@property (nonatomic) double imageLeftOffset;
@property (nonatomic) double topPadding;
@property (nonatomic) {UIEdgeInsets=dddd} textInsets;
- (id)shapeImage;
- (double)imageLeftOffset;
- (void)setShapeImage:;
- (void)setImageLeftOffset:;
- (void)updateTagViewWithFont:maxWidth:isShowInFeed:;
- (void)setFillColor:;
- (id)fillColor;
- (double)topPadding;
- (void)drawRect:;
- (void)setCornerRadius:;
- (id)initWithFrame:;
- (double)maxWidth;
- (void)setTextInsets:;
- (id)textInsets;
- (void)setMaxWidth:;
- (void).cxx_destruct;
- (double)cornerRadius;
- (id)title;
- (void)setTitle:;
- (double)defaultFontSize;
- (void)setDefaultFontSize:;
- (void)setTopPadding:;
+ (BOOL)replaceOperationAvailableForRange:inText:;
+ (id)attributedStringByTruncatingString:toWidth:;
+ (double)calculateTagViewWidthWithTitleWidth:imageWidth:maxWidth:isShowInFeed:;
+ (id)defaultDuetTagViewWithTitle:maxWidth:isShowInFeed:;
@end
