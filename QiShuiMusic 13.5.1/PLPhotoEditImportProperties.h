@interface PLPhotoEditImportProperties : NSObject
@property (nonatomic) q baseEXIFOrientation;
@property (nonatomic) double baseDuration;
- (double)baseDuration;
- (long long)baseEXIFOrientation;
+ (id)importPropertiesWithEXIFOrientation:duration:;
+ (id)importPropertiesWithEXIFOrientation:;
@end
