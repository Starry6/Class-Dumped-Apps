@interface SASExtractSpeechData : SABaseClientBoundCommand
@property (nonatomic) NSString audioOutputType;
@property (nonatomic) NSNumber endTime;
@property (nonatomic) NSString speechRequestId;
@property (nonatomic) NSNumber startTime;
- (id)groupIdentifier;
- (void)setStartTime:;
- (void)setEndTime:;
- (id)startTime;
- (BOOL)requiresResponse;
- (id)endTime;
- (id)encodedClassName;
- (id)audioOutputType;
- (void)setAudioOutputType:;
- (id)speechRequestId;
- (void)setSpeechRequestId:;
+ (id)extractSpeechData;
+ (id)extractSpeechDataWithDictionary:context:;
@end
