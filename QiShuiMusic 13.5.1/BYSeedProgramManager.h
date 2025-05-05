@interface BYSeedProgramManager : NSObject
@property (nonatomic) NSDictionary currentEnrollmentMetadata;
- (void)enrollInSeedProgramNamed:withAssetAudience:completion:;
- (id)currentEnrollmentMetadata;
- (long long)currentSeedProgram;
@end
