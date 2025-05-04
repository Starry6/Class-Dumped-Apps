@interface AWEIMSpeedTestUploadVideoConfig : NSObject
@property (nonatomic) NSDictionary uploadConfig;
@property (nonatomic) NSDictionary requestParameter;
@property (nonatomic) NSDictionary authorizationParameter;
@property (nonatomic) NSString hostName;
@property (nonatomic) NSInteger threshold;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAuthorizationParameter:;
- (void)setUploadConfig:;
- (void)setRequestParameter:;
- (id)uploadConfig;
- (id)requestParameter;
- (id)authorizationParameter;
- (int)threshold;
- (void)setThreshold:;
- (id)description;
- (void).cxx_destruct;
- (id)hostName;
- (void)setHostName:;
@end
