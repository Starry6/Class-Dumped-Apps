@interface IESECEventPublisher : NSObject
@property (nonatomic) NSMutableDictionary eventHandlers;
- (void)didAddEventHandler;
- (void)didRemoveEventHandler;
- (void)removeEventHandlerForKey:;
- (void)publish:;
- (id)init;
- (id)eventHandlers;
- (id)addEventHandler:;
- (void).cxx_destruct;
- (void)setEventHandlers:;
@end
