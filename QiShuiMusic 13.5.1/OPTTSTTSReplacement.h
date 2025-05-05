@interface OPTTSTTSReplacement : NSObject
@property (nonatomic) NSString original;
@property (nonatomic) NSString replacement;
- (void).cxx_destruct;
- (id)original;
- (id)copyWithZone:;
- (id)replacement;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
@end
