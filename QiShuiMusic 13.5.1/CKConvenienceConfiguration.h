@interface CKConvenienceConfiguration : NSObject
@property (nonatomic) CKOperationConfiguration configuration;
@property (nonatomic) CKOperationGroup group;
@property (nonatomic) <CKConvenienceCallbackWrapper> convenienceCallbacks;
- (id)group;
- (id)configuration;
- (void).cxx_destruct;
- (id)initWithConfiguration:group:;
- (id)initWithConfiguration:group:convenienceCallbackWrapper:;
- (id)convenienceCallbacks;
@end
