@interface VNProcessingDescriptor : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)availableVersionsForIdentifier:error:;
+ (id)availableIdentifiers;
+ (id)descriptorForIdentifier:version:error:;
+ (id)descriptorsForIdentifier:error:;
@end
