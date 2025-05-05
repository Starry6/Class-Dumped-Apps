@interface EDVisibleMessagesReloadRegistry : NSObject
- (id)init;
- (id)addObserver:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_scheduleVisibleMessageReload;
- (void)_reloadVisibleMessages;
+ (id)log;
@end
