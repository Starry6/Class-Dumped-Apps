@interface OspreyAuthService : NSObject
- (void).cxx_destruct;
- (id)initWithChannel:authStrategyVersion:;
- (void)certificateDataWithSuccess:failure:;
- (void)createClientSessionWithData:success:failure:;
@end
