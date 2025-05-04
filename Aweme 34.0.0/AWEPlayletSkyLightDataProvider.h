@interface AWEPlayletSkyLightDataProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (Class)schemaClass;
- (void)provideDefaultCardDataWithCardModel:;
- (void)provideInstanceDataWitCardModel:schemaClass:;
+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (id)commonProps;
+ (unsigned long long)serviceType;
@end
