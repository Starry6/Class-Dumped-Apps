@interface EMMessageDeliveryResult : NSObject
@property (nonatomic) q status;
@property (nonatomic) NSError error;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)status;
- (id)initWithStatus:error:;
+ (BOOL)supportsSecureCoding;
@end
