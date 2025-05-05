@interface VCMediaStreamMultiwayConfigVideo : VCMediaStreamMultiwayConfig
@property (nonatomic) q resolution;
@property (nonatomic) I framerate;
@property (nonatomic) NSSet payloads;
@property (nonatomic) Q keyFrameInterval;
@property (nonatomic) NSArray subStreamConfigs;
@property (nonatomic) BOOL isTemporalStream;
@property (nonatomic) BOOL isSubStream;
@property (nonatomic) S parentStreamID;
- (id)init;
- (void)dealloc;
- (void)addPayload:;
- (void)setResolution:;
- (long long)resolution;
- (unsigned int)framerate;
- (id)payloads;
- (void)setFramerate:;
- (id)streamIds;
- (unsigned long long)keyFrameInterval;
- (void)setKeyFrameInterval:;
- (unsigned short)parentStreamID;
- (void)setParentStreamID:;
- (BOOL)isTemporalStream;
- (void)setIsTemporalStream:;
- (BOOL)isSubStream;
- (void)setIsSubStream:;
- (void)addSubStreamConfig:;
- (id)subStreamConfigs;
@end
