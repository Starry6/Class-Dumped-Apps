@interface AWEWebViewPIAInfoProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)secUserID;
- (id)appChannel;
- (id)hostUserAgent;
- (id)userID;
- (id)appVersion;
- (long long)appID;
- (id)deviceID;
- (id)appName;
+ (id)sharedInstance;
@end
