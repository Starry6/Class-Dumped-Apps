@interface AWEAttributeStringUpdateWithEntityWordsProcess : AWEAttributeStringUpdateBaseProcess
- (void)trackTrendingWordsClick:;
- (id)attributeStringUpdateProcess;
- (id)markBeforeModify:withAttributeStringMode:;
- (id)handleDescriptionAttributeString:withAttributeName:;
- (BOOL)entityWordWearchEnable;
@end
