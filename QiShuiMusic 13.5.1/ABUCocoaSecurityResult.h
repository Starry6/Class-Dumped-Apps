@interface ABUCocoaSecurityResult : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSString utf8String;
@property (nonatomic) NSString hex;
@property (nonatomic) NSString hexLower;
@property (nonatomic) NSString base64;
- (id)base64;
- (id)hexLower;
- (id)utf8String;
- (id)initWithBytes:length:;
- (id)data;
- (void).cxx_destruct;
- (id)hex;
@end
