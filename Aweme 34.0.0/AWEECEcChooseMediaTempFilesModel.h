@interface AWEECEcChooseMediaTempFilesModel : IESLiveBridgeModel
@property (nonatomic) NSString tempFilePath;
@property (nonatomic) NSNumber size;
@property (nonatomic) NSString mediaType;
@property (nonatomic) NSString base64Data;
- (void)setTempFilePath:;
- (id)base64Data;
- (void)setBase64Data:;
- (void)setMediaType:;
- (id)mediaType;
- (id)size;
- (void).cxx_destruct;
- (void)setSize:;
- (id)tempFilePath;
+ (id)modelCustomPropertyMapper;
@end
