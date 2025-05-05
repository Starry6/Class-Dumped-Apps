@interface ENScanInstance : NSObject
@property (nonatomic) C minimumAttenuation;
@property (nonatomic) C typicalAttenuation;
@property (nonatomic) q secondsSinceLastScan;
- (void)encodeWithXPCObject:;
- (id)initWithXPCObject:error:;
- (id)description;
- (void)setMinimumAttenuation:;
- (long long)secondsSinceLastScan;
- (unsigned char)typicalAttenuation;
- (void)setTypicalAttenuation:;
- (void)setSecondsSinceLastScan:;
- (unsigned char)minimumAttenuation;
@end
