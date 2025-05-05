@interface SAMICore_VopAudioCheckerOnlineAsrParameter : NSObject
@property (nonatomic) BOOL enableOnlineAsr;
@property (nonatomic) q language;
@property (nonatomic) NSString serverUrl;
@property (nonatomic) NSString appKey;
@property (nonatomic) NSString token;
@property (nonatomic) NSInteger connectionTimeout;
@property (nonatomic) q tokenType;
@property (nonatomic) float werThreshold;
- (BOOL)enableOnlineAsr;
- (id)appKey;
- (void)setAppKey:;
- (void)setEnableOnlineAsr:;
- (void)setWerThreshold:;
- (float)werThreshold;
- (void)dealloc;
- (void)setLanguage:;
- (long long)language;
- (id)token;
- (void)setTokenType:;
- (void)setToken:;
- (int)connectionTimeout;
- (void)setConnectionTimeout:;
- (long long)tokenType;
- (id)serverUrl;
- (void)setServerUrl:;
@end
