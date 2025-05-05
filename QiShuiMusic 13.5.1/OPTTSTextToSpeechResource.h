@interface OPTTSTextToSpeechResource : NSObject
@property (nonatomic) NSString language;
@property (nonatomic) NSString version;
- (id)language;
- (id)version;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
@end
