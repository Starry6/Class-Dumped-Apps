@interface PLThumbnailMigratorWorkItem : NSObject
@property (nonatomic) NSString uuid;
@property (nonatomic) PLManagedAsset asset;
@property (nonatomic) NSString masterThumbFilePath;
@property (nonatomic) Q destinationThumbnailIndex;
@property (nonatomic) BOOL succeeded;
- (id)uuid;
- (id)asset;
- (void)setUuid:;
- (BOOL)succeeded;
- (void).cxx_destruct;
- (void)setAsset:;
- (void)setSucceeded:;
- (id)masterThumbFilePath;
- (void)setMasterThumbFilePath:;
- (unsigned long long)destinationThumbnailIndex;
- (void)setDestinationThumbnailIndex:;
@end
