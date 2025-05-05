@interface PLPhotoEditExporterMetadataConverter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)videoMetadataForVariation:error:;
- (BOOL)setImageVariation:properties:error:;
- (id)photoProcessingFlagsFromProperties:error:;
- (BOOL)setPhotoProcessingFlags:properties:error:;
- (id)photoFeatureFlags:error:;
- (BOOL)setPhotoFeatureFlags:properties:error:;
+ (void)install;
@end
