@interface OTCustodianRecoveryKey : NSObject
@property (nonatomic) NSUUID uuid;
@property (nonatomic) NSData wrappingKey;
@property (nonatomic) NSData wrappedKey;
@property (nonatomic) NSString recoveryString;
- (id)uuid;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)wrappedKey;
- (BOOL)generateWrappingWithError:;
- (id)initWithUUID:recoveryString:error:;
- (BOOL)unwrapWithError:;
- (id)initWithWrappedKey:wrappingKey:uuid:error:;
- (BOOL)isEqualToCustodianRecoveryKey:;
- (id)wrappingKey;
- (id)recoveryString;
+ (BOOL)supportsSecureCoding;
@end
