@interface HMDDoubleReporter : NSObject
@property (nonatomic) NSString doubleUploadHostAndPath;
@property (nonatomic) <HMDDoubleReporterDelegate> delegate;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) NSSet allowPathSet;
- (id)allowPathSet;
- (id)doubleUploadHostAndPath;
- (void)doubleUploadRecordArray:;
- (void)setAllowPathSet:;
- (void)setDoubleUploadHostAndPath:;
- (void)update:;
- (void)setDelegate:;
- (void)setIsRunning:;
- (BOOL)isRunning;
- (id)delegate;
- (void).cxx_destruct;
+ (id)sharedReporter;
@end
