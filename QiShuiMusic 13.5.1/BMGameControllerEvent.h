@interface BMGameControllerEvent : BMEventBase
@property (nonatomic) BOOL isControllerConnected;
@property (nonatomic) Q numberOfControllersConnected;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (id)proto;
- (void)setIsControllerConnected:;
- (BOOL)isControllerConnected;
- (id)encodeAsProto;
- (unsigned int)dataVersion;
- (unsigned long long)hash;
- (id)initWithIsControllerConnected:numberOfControllersConnected:;
- (id)initWithProto:;
- (id)description;
- (unsigned long long)numberOfControllersConnected;
- (id)serialize;
- (BOOL)isEqual:;
- (void)setNumberOfControllersConnected:;
+ (id)eventWithData:dataVersion:;
@end
