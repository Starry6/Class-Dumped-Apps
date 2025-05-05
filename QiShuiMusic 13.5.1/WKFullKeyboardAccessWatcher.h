@interface WKFullKeyboardAccessWatcher : NSObject
- (id)init;
- (void)retrieveKeyboardUIModeFromPreferences:;
- (void)notifyAllProcessPools;
+ (BOOL)fullKeyboardAccessEnabled;
@end
