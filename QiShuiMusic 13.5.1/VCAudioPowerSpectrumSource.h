@interface VCAudioPowerSpectrumSource : VCObject
@property (nonatomic) q streamToken;
@property (nonatomic) ^{_VCAudioPowerSpectrumSourceRealtimeContext={_VCSingleLinkedList=^{_VCSingleLinkedListEntry}B^?Q}^{opaqueCMSimpleQueue}@} realtimeContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)invalidate;
- (id)initWithStreamToken:delegate:;
- (long long)streamToken;
- (id)realtimeContext;
- (void)pushAudioSamples:;
- (void)cleanupQueue:;
- (void)cleanupAudioPowerSpectrumSinks;
@end
