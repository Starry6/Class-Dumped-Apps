@interface AWEECEcChooseMediaParamModel : IESLiveBridgeModel
@property (nonatomic) NSNumber maxCount;
@property (nonatomic) NSString sourceType;
@property (nonatomic) BOOL saveToPhotoAlbum;
@property (nonatomic) BOOL needBase64Data;
@property (nonatomic) NSNumber albumDuration;
@property (nonatomic) NSNumber cameraDuration;
@property (nonatomic) NSString nextButtonTitle;
- (BOOL)saveToPhotoAlbum;
- (void)setSaveToPhotoAlbum:;
- (BOOL)needBase64Data;
- (void)setNeedBase64Data:;
- (id)albumDuration;
- (void)setAlbumDuration:;
- (id)cameraDuration;
- (void)setCameraDuration:;
- (void)setMaxCount:;
- (void)setSourceType:;
- (id)sourceType;
- (id)maxCount;
- (void).cxx_destruct;
- (id)nextButtonTitle;
- (void)setNextButtonTitle:;
+ (id)modelCustomPropertyMapper;
@end
