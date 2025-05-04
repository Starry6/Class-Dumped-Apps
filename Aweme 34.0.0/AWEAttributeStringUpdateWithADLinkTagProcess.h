@interface AWEAttributeStringUpdateWithADLinkTagProcess : AWEAttributeStringUpdateBaseProcess
- (id)attributeStringUpdateProcess;
- (id)markBeforeModify:withAttributeStringMode:;
- (id)handleDescriptionAttributeString:withAttributeName:;
- (id)attributeStringForAdMoreLinkView;
- (id)setShadowWithAdMoreTag:;
@end
