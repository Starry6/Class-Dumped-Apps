@interface SASVoiceIdentificationSignal : SABaseClientBoundCommand
@property (nonatomic) BOOL recordUserAudio;
@property (nonatomic) NSString resultCandidateId;
@property (nonatomic) NSString selectedSharedUserId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)resultCandidateId;
- (void)setResultCandidateId:;
- (BOOL)recordUserAudio;
- (void)setRecordUserAudio:;
- (id)selectedSharedUserId;
- (void)setSelectedSharedUserId:;
+ (id)voiceIdentificationSignal;
+ (id)voiceIdentificationSignalWithDictionary:context:;
@end
