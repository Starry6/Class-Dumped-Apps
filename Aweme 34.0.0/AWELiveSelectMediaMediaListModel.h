@interface AWELiveSelectMediaMediaListModel : IESLiveBridgeModel
@property (nonatomic) NSString fileName;
@property (nonatomic) NSNumber fileSize;
@property (nonatomic) NSString absolutePath;
@property (nonatomic) NSString fileUri;
@property (nonatomic) q mediaType;
@property (nonatomic) AWELiveSelectMediaVideoInfoModel videoInfo;
@property (nonatomic) NSNumber height;
@property (nonatomic) NSNumber width;
- (id)videoInfo;
- (void)setVideoInfo:;
- (BOOL)modelCustomTransformToDictionary:;
- (id)fileUri;
- (void)setFileUri:;
- (void)setMediaType:;
- (void)setHeight:;
- (void)setWidth:;
- (long long)mediaType;
- (void)setFileSize:;
- (id)fileName;
- (id)width;
- (id)fileSize;
- (void).cxx_destruct;
- (id)absolutePath;
- (id)height;
- (void)setFileName:;
- (void)setAbsolutePath:;
+ (id)modelCustomPropertyMapper;
@end
