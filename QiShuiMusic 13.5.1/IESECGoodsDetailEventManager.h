@interface IESECGoodsDetailEventManager : NSObject
@property (nonatomic) NSDictionary eventHandlerDictionary;
- (Class)eventHandlerAccordingToEventComponentID:;
- (id)eventHandlerDictionary;
- (void)registerAllEventID;
- (void)setEventHandlerDictionary:;
- (id)init;
- (void).cxx_destruct;
@end
