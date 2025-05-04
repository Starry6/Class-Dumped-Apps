@interface AWEPOIAlbumSelectedStatus : NSObject
@property (nonatomic) NSMutableArray selectedPhotos;
@property (nonatomic) BOOL isSelectedMode;
@property (nonatomic) BOOL isSelectedFull;
@property (nonatomic) BOOL hasSelected;
- (void)setIsSelectedFull:;
- (void)setIsSelectedMode:;
- (id)selectedPhotos;
- (void)appendSelectedPhoto:;
- (void)removeSelectedPhotos:;
- (BOOL)isSelectedMode;
- (BOOL)isSelectedFull;
- (void)setSelectedPhotos:;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasSelected;
- (void)setHasSelected:;
- (void)clean;
@end
