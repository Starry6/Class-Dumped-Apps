@interface ICMachineDataSyncOperation : ICMachineDataOperation
- (void)execute;
- (void)_finishWithSyncState:error:;
@end
