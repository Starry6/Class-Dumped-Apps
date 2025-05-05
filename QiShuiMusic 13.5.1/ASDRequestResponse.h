@interface ASDRequestResponse : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) NSError error;
- (void)setError:;
- (id)error;
- (id)initWithCoder:;
- (BOOL)success;
- (void)setSuccess:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
