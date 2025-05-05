@interface IESLatchLynxBridgeMessage : NSObject
@property (nonatomic) NSString methodName;
@property (nonatomic) NSDictionary rawData;
@property (nonatomic) NSString protocolVersion;
@property (nonatomic) NSString latchID;
@property (nonatomic) NSString namescope;
@property (nonatomic) NSDictionary data;
- (id)latchID;
- (id)initWithMethodName:rawData:;
- (id)namescope;
- (id)protocolVersion;
- (id)data;
- (void).cxx_destruct;
- (id)rawData;
- (id)methodName;
@end
