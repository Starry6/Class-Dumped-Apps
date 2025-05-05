@interface CTSubscriberAlgorithm : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
@end
