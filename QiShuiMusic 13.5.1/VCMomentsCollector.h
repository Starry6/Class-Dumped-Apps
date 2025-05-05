@interface VCMomentsCollector : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)cleanupActiveRequests;
- (id)initWithStreamToken:;
- (void)stream:addVideoSampleBuffer:cameraStatusBits:timestamp:;
- (void)stream:addAudioSampleBuffer:timestamp:;
@end
