@interface PLPhotoAnalysisAssetAttributes : PLManagedObject
@property (nonatomic) NSData wallpaperPropertiesData;
@property (nonatomic) Q wallpaperPropertiesVersion;
@property (nonatomic) NSDate wallpaperPropertiesTimestamp;
@property (nonatomic) PLManagedAsset asset;
+ (id)entityName;
+ (id)fetchRequest;
@end
