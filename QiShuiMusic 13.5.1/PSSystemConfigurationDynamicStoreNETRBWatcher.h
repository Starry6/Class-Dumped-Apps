@interface PSSystemConfigurationDynamicStoreNETRBWatcher : NSObject
- (id)init;
- (void)dealloc;
- (void)getNETRBState:andReason:;
- (void)readNETRBState:andReason:;
- (void)sendStateUpdate;
- (BOOL)shouldShowTethering;
- (BOOL)isTetheringEnabled;
- (BOOL)isDataEnabled;
+ (id)sharedManager;
@end
