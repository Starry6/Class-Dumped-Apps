@interface AWEPublishSaveToAlbumResource : NSObject
@property (nonatomic) NSArray filePaths;
@property (nonatomic) NSArray indexes;
@property (nonatomic) double livePhotoCoverImagePositions;
@property (nonatomic) BOOL isImages;
@property (nonatomic) BOOL isLivePhoto;
- (BOOL)isImages;
- (void)setIsImages:;
- (double)livePhotoCoverImagePositions;
- (void)setLivePhotoCoverImagePositions:;
- (id)filePaths;
- (id)indexes;
- (void)setIsLivePhoto:;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isLivePhoto;
- (void)setIndexes:;
- (void)setFilePaths:;
@end
