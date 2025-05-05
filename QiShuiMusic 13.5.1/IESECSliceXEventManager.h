@interface IESECSliceXEventManager : NSObject
@property (nonatomic) <IESECSliceXEventForwardDelegate> eventForwardDelegate;
- (id)eventForwardDelegate;
- (void)handleAction:context:;
- (void)setEventForwardDelegate:;
- (void).cxx_destruct;
@end
