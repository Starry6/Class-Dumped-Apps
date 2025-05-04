@interface AWEWebViewUAManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)baseCustomUserAgent;
+ (void)startUpdatingUserAgent;
+ (id)registerCustomUserAgent:;
+ (id)appendExtraUAParams:;
+ (id)mergeCustomUserAgent:withDefaultUA:;
+ (id)fetchCachedUserAgent;
+ (id)fetchDefaultUA;
+ (id)defaultUAFromStorage;
+ (void)saveDefaultUAInStorage:;
+ (id)cutToSystemUserAgentIfNeeded:withApplicationNameForUserAgent:;
+ (id)fakeUA;
@end
