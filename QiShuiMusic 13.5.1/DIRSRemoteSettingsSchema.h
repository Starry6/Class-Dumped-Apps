@interface DIRSRemoteSettingsSchema : DIRSBasicModule
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) q state;
@property (nonatomic) DIRSContext context;
@property (nonatomic) NSString category;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)HTTPBody:options:;
- (id)HTTPPath;
- (id)responseObjectWithData:;
- (BOOL)resultWithResponse:;
- (unsigned long long)serviceType;
- (id)HTTPMethod;
+ (id)moduleId;
+ (id)sharedInstance;
+ (id)moduleVersion;
@end
