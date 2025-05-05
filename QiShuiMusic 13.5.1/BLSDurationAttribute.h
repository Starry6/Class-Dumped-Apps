@interface BLSDurationAttribute : BLSAttribute
@property (nonatomic) double duration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDuration:;
- (void)encodeWithXPCDictionary:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (id)description;
- (double)duration;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)canBePaused;
+ (BOOL)supportsSecureCoding;
+ (id)timeoutAfterInterval:;
+ (id)cancelAfterInterval:;
+ (id)warnAfterInterval:;
@end
