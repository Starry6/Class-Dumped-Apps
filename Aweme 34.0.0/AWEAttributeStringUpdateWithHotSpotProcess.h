@interface AWEAttributeStringUpdateWithHotSpotProcess : AWEAttributeStringUpdateBaseProcess
- (id)hotSpotTagFont;
- (id)hotSpotTagColor;
- (id)attributeStringUpdateProcess;
- (id)markBeforeModify:withAttributeStringMode:;
- (id)handleDescriptionAttributeString:withAttributeName:;
- (void)trackHotSpotTagWithTopic:actionType:;
@end
