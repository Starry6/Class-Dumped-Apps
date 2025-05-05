@interface CNVCardStreetAddressLineGenerator : CNVCardLineGenerator
- (id)lineWithValue:label:;
- (id)makeLineWithName:value:;
- (id)standardLabelsForLabel:;
- (void)addGroupedLineWithName:value:toLine:;
@end
