@interface IESGurdSettingsRequest : NSObject
@property (nonatomic) q version;
@property (nonatomic) q env;
@property (nonatomic) q requestType;
- (long long)env;
- (id)logInfo;
- (void)setEnv:;
- (id)paramsForRequest;
- (long long)requestType;
- (void)setRequestType:;
- (id)init;
- (void)setVersion:;
- (long long)version;
+ (id)request;
@end
