@interface OPTTSTTSNormalizedText : NSObject
@property (nonatomic) NSString text;
- (void).cxx_destruct;
- (id)text;
- (id)copyWithZone:;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
@end
