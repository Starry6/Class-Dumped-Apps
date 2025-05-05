@interface DIRSEventRequestSchema : DIRSBasicModule
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) q state;
@property (nonatomic) DIRSContext context;
@property (nonatomic) NSString category;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)HTTPBodyPacker:;
- (id)HTTPBody:options:;
- (id)HTTPPath;
- (id)HTTPBody:;
- (id)getLogID:;
- (id)responseObjectWithData:;
- (BOOL)resultWithResponse:;
- (unsigned long long)serviceType;
- (id)HTTPMethod;
+ (id)moduleDependencies;
+ (id)moduleId;
+ (id)sharedInstance;
+ (BOOL)isPlugin;
+ (id)moduleVersion;
@end
