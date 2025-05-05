@interface MEEncodedOutgoingMessage : NSObject
@property (nonatomic) NSData rawData;
@property (nonatomic) BOOL isSigned;
@property (nonatomic) BOOL isEncrypted;
- (BOOL)isEncrypted;
- (id)initWithCoder:;
- (BOOL)isSigned;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)rawData;
- (BOOL)isEqual:;
- (id)initWithRawData:isSigned:isEncrypted:;
+ (BOOL)supportsSecureCoding;
@end
