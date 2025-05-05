@interface MGFileWatcher : NSObject
- (void)cancel;
- (void)dealloc;
- (BOOL)updateWatcher;
- (id)initWithPath:block:;
@end
