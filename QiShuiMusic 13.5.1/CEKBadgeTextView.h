@interface CEKBadgeTextView : CEKBadgeView
@property (nonatomic) NSDictionary _textAttributes;
@property (nonatomic) NSString _text;
@property (nonatomic) {UIEdgeInsets=dddd} _textInsets;
@property (nonatomic) NSString contentSizeCategory;
@property (nonatomic) Q fontStyle;
- (id)_maskImage;
- (id)intrinsicContentSize;
- (unsigned long long)fontStyle;
- (id)contentSizeCategory;
- (void)setFontStyle:;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (void)setContentSizeCategory:;
- (id)_text;
- (id)_textAttributes;
- (id)_textSize;
- (void)_setText:;
- (id)_textInsets;
- (void)_setTextInsets:;
- (void)_setTextAttributes:;
+ (id)_defaultTextInsets;
+ (id)_textAttributesForContentSize:fontStyle:;
+ (id)_fontForContentSize:fontStyle:;
+ (double)_textHeightForContentSize:;
+ (double)_heightForContentSize:textInsets:;
@end
