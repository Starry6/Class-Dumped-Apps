@interface IESGurdRegisterManager : NSObject
@property (nonatomic) NSMutableDictionary registerModelsDictionary;
- (void)addCustomParamsForAccessKey:customParams:;
- (id)allAccessKeys;
- (id)allRegisterModels;
- (BOOL)isAccessKeyRegistered:;
- (void)registerAccessKey:;
- (void)registerAccessKey:SDKVersion:;
- (id)registerModelWithAccessKey:;
- (id)registerModelsDictionary;
- (void)setRegisterModelsDictionary:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
