@interface FLHeadlessActionHandler : NSObject
@property (nonatomic) FLFollowUpItem item;
- (id)item;
- (void)dealloc;
- (void)setItem:;
- (void).cxx_destruct;
- (id)initWithItem:;
- (void)handleAction:completion:;
- (void)handleExtensionBasedAction:completion:;
+ (id)handlerWithItem:;
@end
