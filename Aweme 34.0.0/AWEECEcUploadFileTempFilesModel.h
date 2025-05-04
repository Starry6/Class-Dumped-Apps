@interface AWEECEcUploadFileTempFilesModel : IESLiveBridgeModel
@property (nonatomic) NSString tempFilePath;
@property (nonatomic) NSString mediaType;
- (void)setTempFilePath:;
- (void)setMediaType:;
- (id)mediaType;
- (void).cxx_destruct;
- (id)tempFilePath;
+ (id)modelCustomPropertyMapper;
@end
