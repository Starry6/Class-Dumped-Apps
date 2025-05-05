@interface AVAssetDownloadContentConfiguration : NSObject
@property (nonatomic) NSArray variantQualifiers;
@property (nonatomic) NSArray mediaSelections;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)_createFigContentConfigForEnvironmentalCondition:;
- (void)_serializeIntoDownloadConfig:environmentalCondition:;
- (void)_serializeIntoDownloadConfig:asset:;
- (id)variantQualifiers;
- (void)setVariantQualifiers:;
- (id)mediaSelections;
- (void)setMediaSelections:;
+ (BOOL)supportsSecureCoding;
@end
