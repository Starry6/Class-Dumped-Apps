@interface SBSDisplayModeSettings : NSObject
@property (nonatomic) Q scale;
@property (nonatomic) q overscanCompensation;
- (id)initWithCoder:;
- (id)initWithSettings:;
- (long long)overscanCompensation;
- (void)encodeWithCoder:;
- (id)description;
- (id)mutableCopyWithZone:;
- (unsigned long long)scale;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithScale:overscanCompensation:;
- (id)defaultsRepresentation;
+ (BOOL)supportsSecureCoding;
+ (id)fromDefaultsRepresentation:;
@end
