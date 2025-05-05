@interface CXInProcessProvider : CXProvider
@property (nonatomic) CXInProcessCallSource callSource;
@property (nonatomic) NSString identifier;
- (id)initWithConfiguration:callSource:;
- (id)identifier;
- (void)setCallSource:;
- (void).cxx_destruct;
- (id)hostProtocolDelegate;
- (id)callSource;
- (id)initWithConfiguration:;
- (void)setDelegate:queue:;
@end
