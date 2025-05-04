@interface AWESearchWebBusinessImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)willResolveScheme:context:;
- (void)didResolveScheme:schemaModel:schemaClazz:context:;
+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (id)createService;
+ (BOOL)enableSearchLandingThirdPage;
+ (unsigned long long)serviceType;
@end
