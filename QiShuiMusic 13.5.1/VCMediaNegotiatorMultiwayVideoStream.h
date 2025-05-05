@interface VCMediaNegotiatorMultiwayVideoStream : VCMediaNegotiatorMultiwayMediaStream
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) I frameRate;
@property (nonatomic) I keyFrameInterval;
@property (nonatomic) NSInteger payload;
- (int)payload;
- (void)setFrameRate:;
- (unsigned int)frameRate;
- (void)setPayload:;
- (id)description;
- (void)setSize:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)size;
- (unsigned int)keyFrameInterval;
- (void)setKeyFrameInterval:;
@end
