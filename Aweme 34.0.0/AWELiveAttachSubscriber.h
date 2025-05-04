@interface AWELiveAttachSubscriber : NSObject
@property (nonatomic) <AWELiveCustomMessageSubscriber> realSubscriber;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)realSubscriber;
- (void)setRealSubscriber:;
- (void).cxx_destruct;
- (void)messageReceived:;
@end
