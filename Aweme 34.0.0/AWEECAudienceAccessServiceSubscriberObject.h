@interface AWEECAudienceAccessServiceSubscriberObject : NSObject
@property (nonatomic) <IESECAudienceAccessServiceSubscriber> subscriber;
@property (nonatomic) Protocol proto;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setProto:;
- (id)initWithAccessSubscriber:;
- (id)subscriber;
- (void)setSubscriber:;
- (BOOL)respondsToSelector:;
- (id)proto;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)methodSignatureForSelector:;
+ (id)methodSignatureOfProtocol:with:;
@end
