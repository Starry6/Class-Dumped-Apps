@interface ByteRTCASRConfig : NSObject
@property (nonatomic) NSString appId;
@property (nonatomic) NSString userId;
@property (nonatomic) NSString accessToken;
@property (nonatomic) NSString secretKey;
@property (nonatomic) NSString cluster;
@property (nonatomic) q authorizationType;
- (long long)authorizationType;
- (void)setAuthorizationType:;
- (void)setSecretKey:;
- (id)appId;
- (id)userId;
- (void)setAppId:;
- (id)cluster;
- (id)accessToken;
- (void).cxx_destruct;
- (void)setUserId:;
- (id)secretKey;
- (void)setAccessToken:;
- (void)setCluster:;
@end
