@interface VSDeveloperSettingsFetchOperation : VSAsyncOperation
@property (nonatomic) VSOptional result;
@property (nonatomic) VSDeveloperServiceConnection connection;
- (id)result;
- (void)executionDidBegin;
- (id)init;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)setResult:;
@end
