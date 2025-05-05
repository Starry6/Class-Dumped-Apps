@interface QLDismissAction : NSObject
@property (nonatomic) @? completionHandler;
@property (nonatomic) NSString title;
@property (nonatomic) q alertStyle;
@property (nonatomic) BOOL shouldDismissQuickLookAutomatically;
- (void)setCompletionHandler:;
- (void)setTitle:;
- (void)setAlertStyle:;
- (id)title;
- (void).cxx_destruct;
- (long long)alertStyle;
- (id)completionHandler;
- (id)initWithTitle:alertStyle:shouldDismissQuickLookAutomatically:handler:;
- (BOOL)shouldDismissQuickLookAutomatically;
- (void)setShouldDismissQuickLookAutomatically:;
+ (id)actionWithTitle:handler:;
+ (id)actionWithTitle:alertStyle:shouldDismissQuickLookAutomatically:handler:;
@end
