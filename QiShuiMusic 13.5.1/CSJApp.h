@interface CSJApp : NSObject
@property (nonatomic) NSString appID;
@property (nonatomic) NSString name;
@property (nonatomic) NSString packageName;
@property (nonatomic) NSString version;
@property (nonatomic) Q userfulOpenSDK;
@property (nonatomic) NSString appScheme;
- (id)appScheme;
- (id)csj_dictionaryValue;
- (id)getAppScheme;
- (void)loadCurrentAppInfo;
- (void)setAppScheme:;
- (void)setUserfulOpenSDK:;
- (unsigned long long)userfulOpenSDK;
- (id)init;
- (void)setName:;
- (void)setVersion:;
- (id)version;
- (void)setAppID:;
- (id)packageName;
- (id)appID;
- (void).cxx_destruct;
- (id)name;
- (void)setPackageName:;
+ (id)currentApp;
@end
