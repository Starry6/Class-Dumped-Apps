@interface AWEGDNoActionEventHandler : AWENoActionEventHandler
@property (nonatomic) @? completeHandler;
@property (nonatomic) DitoPageContext context;
- (id)initWithDetectedView:;
- (id)completeHandler;
- (void)setCompleteHandler:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
