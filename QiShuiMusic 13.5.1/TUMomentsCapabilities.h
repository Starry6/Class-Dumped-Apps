@interface TUMomentsCapabilities : NSObject
@property (nonatomic) NSInteger availability;
@property (nonatomic) NSSet supportedMediaTypes;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (BOOL)isEqualToCapabilities:;
- (id)supportedMediaTypes;
- (int)availability;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithAvailability:supportedMediaTypes:;
+ (BOOL)supportsSecureCoding;
@end
