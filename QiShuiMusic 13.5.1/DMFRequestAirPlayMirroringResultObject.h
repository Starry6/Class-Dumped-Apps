@interface DMFRequestAirPlayMirroringResultObject : CATTaskResultObject
@property (nonatomic) Q status;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithStatus:;
- (unsigned long long)status;
+ (BOOL)supportsSecureCoding;
@end
