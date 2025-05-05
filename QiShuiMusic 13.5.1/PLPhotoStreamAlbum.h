@interface PLPhotoStreamAlbum : PLManagedAlbum
@property (nonatomic) NSString personID;
- (void)enforceImageLimitIfNecessary;
- (void)awakeFromInsert;
- (BOOL)shouldDeleteWhenEmpty;
- (id)personID;
- (void)setPersonID:;
- (void)addAssetOrderedByDataTaken:;
+ (id)entityName;
+ (id)keyPathsForValuesAffectingPersonID;
+ (id)photoStreamAlbumWithStreamID:inPhotoLibrary:createIfNeeded:;
@end
