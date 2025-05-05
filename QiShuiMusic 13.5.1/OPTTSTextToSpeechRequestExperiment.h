@interface OPTTSTextToSpeechRequestExperiment : NSObject
@property (nonatomic) NSString experiment_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)experiment_identifier;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
@end
