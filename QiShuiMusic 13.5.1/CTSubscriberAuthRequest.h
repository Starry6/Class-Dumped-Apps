@interface CTSubscriberAuthRequest : NSObject
@property (nonatomic) CTSubscriberAlgorithm algorithm;
- (id)algorithm;
- (void)setAlgorithm:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
