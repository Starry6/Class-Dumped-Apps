@interface AWEIMGroupNoticeModifyMessage : AWEIMMessage
@property (nonatomic) NSArray templateArray;
@property (nonatomic) AWEIMLinkTextUtility textUtility;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSArray linkArray;
@property (nonatomic) NSAttributedString forwardPreviewAttributedText;
@property (nonatomic) {CGSize=dd} titleSize;
- (void)setTextUtility:;
- (id)calculateAttributedContent;
- (id)forwardPreviewAttributedText;
- (id)getContentDict;
- (id)initWithContentDict:;
- (id)linkArray;
- (void)setForwardPreviewAttributedText:;
- (void)setTemplateArray:;
- (void)setTitleSize:;
- (id)templateArray;
- (id)textUtility;
- (id)content;
- (void)setContent:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)titleSize;
+ (id)contentAttributes;
@end
