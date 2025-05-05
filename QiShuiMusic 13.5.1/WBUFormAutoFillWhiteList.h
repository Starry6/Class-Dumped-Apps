@interface WBUFormAutoFillWhiteList : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_whiteListSettingsChanged:;
- (BOOL)allowsURL:;
+ (id)sharedAutoFillWhiteList;
@end
