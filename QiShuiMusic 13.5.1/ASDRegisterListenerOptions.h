@interface ASDRegisterListenerOptions : NSObject
@property (nonatomic) NSString clientID;
@property (nonatomic) NSXPCConnection endpoint;
- (void)setEndpoint:;
- (void)setClientID:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)endpoint;
- (id)clientID;
+ (BOOL)supportsSecureCoding;
@end
