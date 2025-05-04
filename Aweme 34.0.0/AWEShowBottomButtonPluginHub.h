@interface AWEShowBottomButtonPluginHub : NSObject
@property (nonatomic) AWEPlayInteractionContext interactionContext;
@property (nonatomic) <AWEEntertainmentMultipleEventsViewProtocol> multipleEventsView;
@property (nonatomic) AWEPageContext eventContext;
@property (nonatomic) NSMutableDictionary plugins;
@property (nonatomic) <AWEShowBottomButtonPluginHubDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addEventHandler;
- (void)setEventContext:;
- (id)multipleEventsView;
- (void)setMultipleEventsView:;
- (void)trackWithEvent:params:forPluginType:;
- (id)getSchemaParamsForPluginType:;
- (void)registerPlugin:sceneID:;
- (void)unregisterPlugin:sceneID:;
- (id)getPluginForType:sceneID:;
- (id)initWithContext:multipleEventsView:;
- (id)delegate;
- (void)setPlugins:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)eventContext;
- (id)plugins;
- (id)interactionContext;
- (void)setInteractionContext:;
@end
