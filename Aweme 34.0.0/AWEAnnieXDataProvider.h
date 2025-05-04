@interface AWEAnnieXDataProvider : NSObject
@property (nonatomic) NSDictionary globalPorpsInMainThread;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (Class)schemaClass;
- (Class)schemaClassWithContainerType:engineType:;
- (void)provideDefaultCardDataWithCardModel:;
- (void)provideInstanceDataWitCardModel:schemaClass:;
- (void)provideDefaultDataWithContext:;
- (void)provideInstanceDataWitContext:schemaClass:;
- (id)aAWEAnnieXDataCommonAdapter;
- (id)globalPorpsInMainThread;
- (void)setGlobalPorpsInMainThread:;
- (void).cxx_destruct;
+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (id)commonProps;
+ (id)commonWebProps;
+ (id)commonRequestPrasms;
+ (id)bizGlobalPropsWithSchema:;
+ (id)bizWebGlobalPropsWithSchema:;
+ (Class)aAWEAnnieXDataCommonAdapterClass;
+ (id)abParamsInGlobalProps:;
+ (unsigned long long)serviceType;
@end
