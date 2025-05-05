@interface SAMICore_ServerContextCreateParameter : NSObject
@property (nonatomic) r* url;
@property (nonatomic) r* appKey;
@property (nonatomic) q tokenType;
@property (nonatomic) r* token;
@property (nonatomic) NSInteger connectTimeout;
@property (nonatomic) q timeStamp;
@property (nonatomic) r* envType;
@property (nonatomic) r* env;
- (id)env;
- (id)envType;
- (void)setEnv:;
- (id)appKey;
- (void)setAppKey:;
- (void)setEnvType:;
- (id)url;
- (id)token;
- (void)setUrl:;
- (void)setTokenType:;
- (void)setToken:;
- (long long)timeStamp;
- (void)setTimeStamp:;
- (long long)tokenType;
- (int)connectTimeout;
- (void)setConnectTimeout:;
@end
