@interface SASStartAsrOnServerRequest : SASStartSpeechRequest
@property (nonatomic) NSNumber runCamFtm;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)runCamFtm;
- (void)setRunCamFtm:;
@end
