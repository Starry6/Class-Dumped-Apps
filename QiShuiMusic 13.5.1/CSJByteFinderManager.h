@interface CSJByteFinderManager : NSObject
@property (nonatomic) NSString applogDid;
@property (nonatomic) NSString did;
- (void)setDid:;
- (void)setupCrashAndAppLogSDKWithHost:;
- (id)did;
- (id)applogDid;
- (void)setApplogDid:;
- (id)init;
- (void).cxx_destruct;
+ (void)_signalAction;
+ (id)host_appid;
+ (void)startAPMWithDid:host:;
+ (void)startCrashAndAppLogSDKWithDid:host:;
+ (id)sharedInstance;
+ (id)sdkVersion;
@end
