@interface AWEAttributeStringUpdateWithLineSpaceProcess : AWEAttributeStringUpdateBaseProcess
- (void)updateParagraphStyleWithAttributedString:;
- (id)attributeStringUpdateProcess;
- (id)markBeforeModify:withAttributeStringMode:;
- (id)handleDescriptionAttributeString:withAttributeName:;
- (void)updateParagraphStyleWithAttributedString:forMaskLayer:;
- (double)labelParagraphStyleLineSpacing:;
- (double)labelParagraphStyleMinLineHeight;
- (double)labelParagraphStyleMaxLineHeight;
- (double)labelParagraphStyleBaseLineSpacing;
@end
