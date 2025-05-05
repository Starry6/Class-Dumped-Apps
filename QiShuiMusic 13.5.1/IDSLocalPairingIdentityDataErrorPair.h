@interface IDSLocalPairingIdentityDataErrorPair : NSObject
@property (nonatomic) NSData identityData;
@property (nonatomic) NSError error;
- (id)identityData;
- (id)initWithError:;
- (void)setError:;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithIdentityData:error:;
- (id)initWithIdentityData:;
- (void)setIdentityData:;
+ (BOOL)supportsSecureCoding;
@end
