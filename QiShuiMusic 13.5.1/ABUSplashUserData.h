@interface ABUSplashUserData : NSObject
@property (nonatomic) NSString adnName;
@property (nonatomic) NSString rit;
@property (nonatomic) NSString appID;
@property (nonatomic) NSString appKey;
- (id)adnName;
- (id)rit;
- (void)setRit:;
- (id)appKey;
- (id)initWithAdnName:rit:appID:appKey:;
- (void)setAdnName:;
- (void)setAppKey:;
- (BOOL)isMemberOfClass:;
- (void)setAppID:;
- (id)appID;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
@end
