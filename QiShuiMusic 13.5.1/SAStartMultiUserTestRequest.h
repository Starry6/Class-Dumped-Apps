@interface SAStartMultiUserTestRequest : SAStartRequest
@property (nonatomic) NSString expectedSelectedSharedUserId;
@property (nonatomic) SAConfidenceScores voiceIDConfidenceScores;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)voiceIDConfidenceScores;
- (void)setVoiceIDConfidenceScores:;
- (id)expectedSelectedSharedUserId;
- (void)setExpectedSelectedSharedUserId:;
+ (id)startMultiUserTestRequest;
+ (id)startMultiUserTestRequestWithDictionary:context:;
@end
