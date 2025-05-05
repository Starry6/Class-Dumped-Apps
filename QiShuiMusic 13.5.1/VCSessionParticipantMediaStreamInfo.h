@interface VCSessionParticipantMediaStreamInfo : NSObject
@property (nonatomic) VCMediaStream stream;
@property (nonatomic) NSArray streamConfigs;
- (id)stream;
- (void)setStream:;
- (id)init;
- (void)dealloc;
- (void)addStreamConfig:;
- (id)streamConfigs;
@end
