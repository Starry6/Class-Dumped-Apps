@interface FBSDisplayConfigurationRequest : NSObject
@property (nonatomic) q overscanCompensation;
@property (nonatomic) {CGSize=dd} nativePixelSize;
@property (nonatomic) double refreshRate;
@property (nonatomic) q hdrMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)hdrMode;
- (id)init;
- (void)encodeWithXPCDictionary:;
- (id)nativePixelSize;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (double)refreshRate;
- (long long)overscanCompensation;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (id)succinctDescription;
- (id)description;
- (id)mutableCopyWithZone:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
