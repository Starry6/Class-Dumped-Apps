@interface AFOutputVoiceDescriptor : NSObject
@property (nonatomic) NSString localizedDisplay;
@property (nonatomic) NSString localizedDisplayWithRegion;
- (id)init;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)localizedDisplay;
- (id)initWithLocalizedDisplay:localizedDisplayWithRegion:;
- (id)localizedDisplayWithRegion;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
