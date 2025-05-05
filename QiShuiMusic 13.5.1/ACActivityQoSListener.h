@interface ACActivityQoSListener : NSObject
@property (nonatomic) _TtC11ActivityKit28ActivityQoSObservationClient client;
- (id)init;
- (void)setClient:;
- (id)client;
- (void).cxx_destruct;
- (id)listenForActivityQoS:withHandler:;
@end
