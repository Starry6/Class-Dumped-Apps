@interface IMUnitTestBundleLoader : NSObject
@property (nonatomic) IMUnitTestLogger logger;
- (id)logger;
- (void).cxx_destruct;
- (id)initWithLogger:;
- (BOOL)loadTestBundle:bundle:error:;
@end
