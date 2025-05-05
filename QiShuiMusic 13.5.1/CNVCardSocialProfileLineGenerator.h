@interface CNVCardSocialProfileLineGenerator : CNVCardLineGenerator
- (id)lineWithValue:label:;
- (void)addStandardLabel:toLine:;
- (void)addCustomLabel:toLine:;
- (void)addPrimaryValueMarkerToLine:;
- (BOOL)isStandardServiceName:;
@end
