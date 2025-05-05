@interface ASDPurchaseResult : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) NSError error;
- (id)error;
- (id)initWithCoder:;
- (BOOL)success;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithSuccess:error:;
+ (BOOL)supportsSecureCoding;
@end
