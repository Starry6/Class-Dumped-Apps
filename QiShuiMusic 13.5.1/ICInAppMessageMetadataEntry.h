@interface ICInAppMessageMetadataEntry : NSObject
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)allMetadataValues;
- (void).cxx_destruct;
- (id)metadataValueForKey:;
- (void)setMetadataValue:forKey:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
