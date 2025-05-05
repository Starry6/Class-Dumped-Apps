@interface MEDecodedMessage : NSObject
@property (nonatomic) NSData rawData;
@property (nonatomic) MEMessageSecurityInformation securityInformation;
@property (nonatomic) NSData context;
@property (nonatomic) MEDecodedMessageBanner banner;
- (id)banner;
- (id)context;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)rawData;
- (BOOL)isEqual:;
- (id)securityInformation;
- (id)initWithData:securityInformation:context:;
- (id)initWithData:securityInformation:context:banner:;
+ (BOOL)supportsSecureCoding;
@end
