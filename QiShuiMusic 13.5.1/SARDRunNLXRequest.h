@interface SARDRunNLXRequest : SABaseClientBoundCommand
@property (nonatomic) SASRecognition asrOutput;
@property (nonatomic) NSNumber processedAudioDuration;
@property (nonatomic) NSString userId;
- (id)groupIdentifier;
- (id)userId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setUserId:;
- (id)processedAudioDuration;
- (void)setProcessedAudioDuration:;
- (id)asrOutput;
- (void)setAsrOutput:;
@end
