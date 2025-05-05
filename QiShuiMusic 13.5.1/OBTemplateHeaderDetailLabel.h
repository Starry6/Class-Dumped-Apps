@interface OBTemplateHeaderDetailLabel : OBTemplateLabel
@property (nonatomic) {_NSRange=QQ} titleRange;
@property (nonatomic) {_NSRange=QQ} bodyRange;
- (void)updateTextAlignment;
- (void)setDetailedTextHeader:detailedTextBody:;
- (id)titleRange;
- (void)setTitleRange:;
- (id)bodyRange;
- (void)setBodyRange:;
@end
