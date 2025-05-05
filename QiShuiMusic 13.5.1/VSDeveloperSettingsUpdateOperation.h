@interface VSDeveloperSettingsUpdateOperation : VSAsyncOperation
@property (nonatomic) VSOptional result;
@property (nonatomic) VSDeveloperServiceConnection connection;
@property (nonatomic) VSDeveloperSettings settings;
- (id)result;
- (void)executionDidBegin;
- (id)init;
- (id)settings;
- (void)setSettings:;
- (id)initWithSettings:;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)setResult:;
@end
