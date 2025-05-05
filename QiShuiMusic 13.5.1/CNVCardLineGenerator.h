@interface CNVCardLineGenerator : NSObject
- (void).cxx_destruct;
- (id)initWithName:groupingCount:;
- (id)lineWithValue:label:;
- (id)makeLineWithName:value:;
- (id)standardLabelsForLabel:;
- (void)addStandardLabel:toLine:;
- (void)addCustomLabel:toLine:;
- (void)addPrimaryValueMarkerToLine:;
+ (id)generatorWithName:groupingCount:;
+ (id)dateComponentsGeneratorWithName:groupingCount:;
+ (id)alternateDateComponentsGeneratorWithName:groupingcount:;
+ (id)instantMessagingGeneratorWithName:groupingCount:;
+ (id)legacyInstantMessagingGeneratorWithName:groupingCount:;
+ (id)socialProfileGeneratorWithName:groupingCount:;
+ (id)emailGeneratorWithName:groupingCount:;
+ (id)phoneGeneratorWithName:groupingCount:;
+ (id)streetAddressGeneratorWithName:groupingCount:;
+ (id)activityAlertGeneratorWithName:groupingCount:;
@end
