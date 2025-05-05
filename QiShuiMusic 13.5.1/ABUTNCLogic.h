@interface ABUTNCLogic : NSObject
@property (nonatomic) <ABUTNCServiceManager> TNCServiceManager;
@property (nonatomic) BOOL supportedByFoundation;
@property (nonatomic) # baseRequestClass;
@property (nonatomic) NSMutableDictionary requestClasses;
- (id)TNCServiceManagerFromFoundation;
- (id)TNCServiceManager;
- (id)TNCServiceManagerFromABUAdSDK;
- (BOOL)addMethodToRequestClass:withSelector:;
- (BOOL)addMethodToRequestClass:withSelector:instanceMethod:;
- (Class)baseRequestClass;
- (void)changeRequestSuperClass;
- (id)createTNCRequestParam;
- (Class)getTNCRequestClassForKey:;
- (BOOL)isSupportByFoundation;
- (void)registerTNCServiceWithAppKey:tncDomains:tncPath:requestParam:;
- (id)requestClasses;
- (void)setBaseRequestClass:;
- (void)setRequestClasses:;
- (void)setSupportedByFoundation:;
- (void)setTNCRequestClass:forKey:;
- (void)setTNCServiceManager:;
- (void)setTNCSupport:;
- (id)init;
- (void)startService;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
