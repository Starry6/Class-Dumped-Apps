@interface SASVPhraseData : AceObject
@property (nonatomic) NSArray interpretationDataList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)interpretationDataList;
- (void)setInterpretationDataList:;
+ (id)phraseData;
+ (id)phraseDataWithDictionary:context:;
@end
