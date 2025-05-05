@interface IESECOpenMessageSubscriberWrapper : NSObject
@property (nonatomic) <IESECOpenMessageSubscriber> target;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
- (void)messageReceived:;
+ (id)wrapperWithTarget:;
@end
