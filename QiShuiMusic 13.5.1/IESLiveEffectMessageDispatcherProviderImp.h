@interface IESLiveEffectMessageDispatcherProviderImp : NSObject
@property (nonatomic) NSMutableDictionary subscriberDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)addSubscriber:forMessages:;
- (void)combineDisposableForAddEffectMessageSubscriber:forMessages:;
- (void)didReceiveMessage:arg1:arg2:data:;
- (void)setSubscriberDict:;
- (id)subscriberDict;
- (void)unsubscribe:forMessages:;
- (id)init;
- (void).cxx_destruct;
@end
