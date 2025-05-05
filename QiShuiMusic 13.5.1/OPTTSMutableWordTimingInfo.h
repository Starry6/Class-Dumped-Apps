@interface OPTTSMutableWordTimingInfo : OPTTSWordTimingInfo
@property (nonatomic) NSString word;
@property (nonatomic) I sample_idx;
@property (nonatomic) I offset;
@property (nonatomic) I length;
@property (nonatomic) float timestamp;
- (void)setOffset:;
- (id)init;
- (unsigned int)offset;
- (void)setTimestamp:;
- (float)timestamp;
- (unsigned int)length;
- (void)setLength:;
- (id)copyWithZone:;
- (id)word;
- (void)setWord:;
- (unsigned int)sample_idx;
- (void)setSample_idx:;
@end
