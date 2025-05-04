@interface AWEHPLandingStrategyAbilityImpl : NSObject
@property (nonatomic) MMKV mmkv;
@property (nonatomic) AWEHPLandingContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMmkv:;
- (id)mmkv;
- (id)readUserDataForKey:;
- (void)writeUserData:forKey:;
- (id)p_getCurrentUserId;
- (id)p_generateUserKey:;
- (id)p_generateDeviceKey:;
- (void)writeDeviceData:forKey:;
- (id)readDeviceDataForKey:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
