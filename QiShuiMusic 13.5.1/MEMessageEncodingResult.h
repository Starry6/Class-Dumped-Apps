@interface MEMessageEncodingResult : NSObject
@property (nonatomic) MEEncodedOutgoingMessage encodedMessage;
@property (nonatomic) NSError signingError;
@property (nonatomic) NSError encryptionError;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithEncodedMessage:signingError:encryptionError:;
- (id)encodedMessage;
- (id)signingError;
- (id)encryptionError;
+ (BOOL)supportsSecureCoding;
@end
