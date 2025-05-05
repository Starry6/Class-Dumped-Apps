@interface BDUGLuckyDogNetworkUtils : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)commonGetParams;
+ (id)__settingsVersionDicWithPrefix;
+ (id)__settingsVersionDicWithoutPrefix;
+ (id)addCommonGetParamsWithParams:;
+ (id)addCommonPostParamsWithParams:;
+ (id)addCommonRequestHeaderFieldsWithFields:;
+ (id)commonPostParams;
+ (id)commonRequestHeaderFields;
+ (void)initializeNetworkModule;
+ (void)registerRequestSerializerBlock;
+ (BOOL)shouldAllowJSONArrayBodyWithURL:;
+ (id)sharedInstance;
+ (id)serviceProtocol;
@end
