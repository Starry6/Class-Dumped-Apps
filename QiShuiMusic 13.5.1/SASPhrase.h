@interface SASPhrase : AceObject
@property (nonatomic) NSArray interpretations;
@property (nonatomic) BOOL lowConfidence;
@property (nonatomic) BOOL speechRepairApplied;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)af_speechInterpretations;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)interpretations;
- (BOOL)lowConfidence;
- (void)setInterpretations:;
- (void)setLowConfidence:;
- (BOOL)speechRepairApplied;
- (void)setSpeechRepairApplied:;
+ (id)phrase;
+ (id)phraseWithDictionary:context:;
@end
