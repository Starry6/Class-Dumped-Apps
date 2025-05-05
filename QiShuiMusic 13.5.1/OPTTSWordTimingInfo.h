@interface OPTTSWordTimingInfo : NSObject
@property (nonatomic) NSString word;
@property (nonatomic) I sample_idx;
@property (nonatomic) I offset;
@property (nonatomic) I length;
@property (nonatomic) float timestamp;
- (unsigned int)offset;
- (void).cxx_destruct;
- (float)timestamp;
- (unsigned int)length;
- (id)copyWithZone:;
- (id)word;
- (unsigned int)sample_idx;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
@end
