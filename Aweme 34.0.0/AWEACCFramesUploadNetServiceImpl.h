@interface AWEACCFramesUploadNetServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateFramesWithParams:completion:;
- (void)updateFramesWithItemID:videoId:materialId:stickers:otherParams:completion:;
- (void)updateSlidesFramesWithItemID:videoIds:videoMaterialIds:imageIds:imageMaterialInfos:awemeType:otherParams:completion:;
@end
