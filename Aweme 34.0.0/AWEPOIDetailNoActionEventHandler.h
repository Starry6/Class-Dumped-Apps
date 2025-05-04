@interface AWEPOIDetailNoActionEventHandler : AWENoActionEventHandler
@property (nonatomic) @? completeHandler;
@property (nonatomic) DitoPageContext context;
@property (nonatomic) @? track;
- (id)initWithDetectedView:;
- (id)completeHandler;
- (void)setCompleteHandler:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)track;
- (id)getSessionInfo;
- (void)setTrack:;
@end
