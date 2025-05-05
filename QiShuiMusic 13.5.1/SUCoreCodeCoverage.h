@interface SUCoreCodeCoverage : NSObject
+ (void)initializeForName:;
+ (void)_handleSignal:forName:;
+ (id)getCodeCoveragePathForName:;
+ (void)dumpCodeCoverageForName:;
+ (void)resetCodeCoverageForName:;
@end
