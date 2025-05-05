@interface HTSShortcutContext : NSObject
@property (nonatomic) UIApplicationShortcutItem item;
@property (nonatomic) @? completionHandler;
- (id)item;
- (void)setCompletionHandler:;
- (void)setItem:;
- (void).cxx_destruct;
- (id)completionHandler;
@end
