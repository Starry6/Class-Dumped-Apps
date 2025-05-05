@interface BDXBridgeWebProtocol : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)callMessageWithRawData:;
+ (id)callbackMethod;
+ (id)callbackObject;
+ (id)callbackStringWithParams:callMessage:;
+ (id)eventStringWithName:params:;
+ (id)jsInvokeMethod;
+ (id)jsInvokeObject;
+ (id)jsMessageHandler;
+ (unsigned long long)xType;
+ (id)protocolName;
@end
