@interface BWInferenceMetadataRequirement : BWInferenceDataRequirement
@property (nonatomic) NSArray metadataKeys;
@property (nonatomic) s mappingOption;
- (void)dealloc;
- (id)metadataKeys;
- (id)initWithMetadataKeys:;
- (id)initWithMetadataKeys:mappingOption:;
- (short)mappingOption;
- (id)description;
- (id)initWithMetadataRequirement:;
- (id)copyWithZone:;
@end
