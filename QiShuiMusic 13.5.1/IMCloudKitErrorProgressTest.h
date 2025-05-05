@interface IMCloudKitErrorProgressTest : IMCloudKitSyncProgressRuntimeTest
@property (nonatomic) NSError error;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (id)initWithErrorCode:;
- (void)willUpdateSyncState:;
@end
