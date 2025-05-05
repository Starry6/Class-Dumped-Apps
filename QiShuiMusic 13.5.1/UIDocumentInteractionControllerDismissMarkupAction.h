@interface UIDocumentInteractionControllerDismissMarkupAction : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) @? completionHandler;
- (void)setCompletionHandler:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)completionHandler;
- (id)initWithTitle:handler:;
+ (id)actionWithTitle:handler:;
@end
