@interface AWEIMMixPhotoFaceDetectManager : NSObject
@property (nonatomic) BOOL useNewAlgorithm;
@property (nonatomic) NSString effectID;
@property (nonatomic) NSString filePath;
@property (nonatomic) AWEIMAIFaceDetectAlgorithmDownloader downloader;
- (void)setEffectID:;
- (void)fetchEffectFilePath:;
- (void)checkFaceImageForMixPhoto:checkModel:imagePath:trackExt:complete:;
- (void)p_trackFaceDetectWithResult:duration:extra:;
- (BOOL)hitExp;
- (void)setUseNewAlgorithm:;
- (BOOL)useNewAlgorithm;
- (void)checkFaceImageForMixPhoto:checkModel:trackExt:complete:;
- (void)runAlgorithmImagePath:photoImage:checkModel:effectModelFilePath:trackExt:complete:;
- (id)faceInfoForImage:;
- (id)filePath;
- (id)init;
- (id)downloader;
- (void)setFilePath:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (void)setDownloader:;
- (id)effectId;
- (id)effectID;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
