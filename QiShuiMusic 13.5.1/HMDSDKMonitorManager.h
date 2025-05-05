@interface HMDSDKMonitorManager : NSObject
@property (nonatomic) NSMutableDictionary sdkInfoDict;
- (void)setSdkInfoDict:;
- (id)sdkHostAidWithSDKAid:;
- (id)sdkInfoDict;
- (void)setupSDKMonitorWithSDKAid:monitorUserInfo:productions:;
- (id)ttMonitorUserInfoWithSDKAid:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)sharedInstance;
@end
