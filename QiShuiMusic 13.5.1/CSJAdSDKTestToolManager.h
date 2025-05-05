@interface CSJAdSDKTestToolManager : NSObject
@property (nonatomic) NSString testTimeStamp;
@property (nonatomic) NSString hostIP;
@property (nonatomic) NSString hostPort;
- (id)hostIP;
- (void)initializeCurrentTime;
- (void)setHostIP:;
- (void)setTestTimeStamp:;
- (id)testTimeStamp;
- (id)init;
- (BOOL)isMemberOfClass:;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (id)hostPort;
- (void)setHostPort:;
+ (BOOL)isUnionBundleId;
+ (void)clearIPAddress;
+ (void)clearInputContent;
+ (void)setHostIP:;
+ (void)setInputOneContent:;
+ (void)setInputTwoContent:;
+ (void)setTestLatitude:;
+ (void)setTestLongitude:;
+ (id)sharedInstance;
+ (BOOL)isDemoEnvironment;
+ (void)setHostPort:;
@end
