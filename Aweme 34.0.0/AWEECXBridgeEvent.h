@interface AWEECXBridgeEvent : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)subscribeEventNamed:callback:;
@end
