@interface SASVSpeechMetadata : AceObject
@property (nonatomic) NSArray phraseDataList;
@property (nonatomic) NSString preITN;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)phraseDataList;
- (void)setPhraseDataList:;
- (id)preITN;
- (void)setPreITN:;
+ (id)speechMetadata;
+ (id)speechMetadataWithDictionary:context:;
@end
