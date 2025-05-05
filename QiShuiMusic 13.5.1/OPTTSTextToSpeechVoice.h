@interface OPTTSTextToSpeechVoice : NSObject
@property (nonatomic) NSString language;
@property (nonatomic) NSString gender;
@property (nonatomic) NSString name;
@property (nonatomic) NSString version;
@property (nonatomic) NSString quality;
@property (nonatomic) NSString type;
- (id)quality;
- (id)gender;
- (id)language;
- (id)version;
- (id)type;
- (void).cxx_destruct;
- (id)name;
- (id)copyWithZone:;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
@end
