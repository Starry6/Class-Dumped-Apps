@interface ABUUserValue : NSObject
@property (nonatomic) q timestamp;
@property (nonatomic) double ecpm;
- (double)ecpm;
- (void)setEcpm:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (long long)timestamp;
+ (BOOL)supportsSecureCoding;
@end
