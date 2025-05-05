@interface VCPHumanPoseVideoRequest : VCPRequest
- (id)init;
- (id)initWithOptions:;
- (void).cxx_destruct;
- (id)preferredInputSizeWithOptions:error:;
- (unsigned int)preferredPixelFormat;
- (BOOL)cleanupWithOptions:error:;
- (id)processSampleBuffer:withOptions:error:;
- (float)bodyDistance:withBodyB:;
- (void)computeActionScoreForPerson:;
- (void)computeVarWithID:index1:index2:interVar:intraVar:;
- (float)normDistance:point2:;
- (int)associatePersons:withExisingPersons:;
@end
