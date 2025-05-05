@interface AMSDataMigratorOptions : NSObject
@property (nonatomic) NSString currentBuildVersion;
@property (nonatomic) NSArray optionsArray;
@property (nonatomic) NSString previousBuildVersion;
@property (nonatomic) Q scenario;
- (id)init;
- (id)initWithOptionsArray:;
- (void)setCurrentBuildVersion:;
- (unsigned long long)scenario;
- (id)currentBuildVersion;
- (void).cxx_destruct;
- (void)setPreviousBuildVersion:;
- (id)optionsArray;
- (id)previousBuildVersion;
- (void)setScenario:;
+ (id)_stringFromOptionsArray:atIndex:;
@end
