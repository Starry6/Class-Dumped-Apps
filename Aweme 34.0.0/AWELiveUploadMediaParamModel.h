@interface AWELiveUploadMediaParamModel : IESLiveBridgeModel
@property (nonatomic) AWELiveUploadMediaAuthInfoModel authInfo;
@property (nonatomic) NSString uploadServerPath;
@property (nonatomic) q fileType;
@property (nonatomic) NSArray filePathList;
@property (nonatomic) NSString videoUploadExtra;
@property (nonatomic) BOOL useUploaderV2;
@property (nonatomic) BOOL needEncrypt;
- (BOOL)needEncrypt;
- (BOOL)modelCustomTransformFromDictionary:;
- (void)setNeedEncrypt:;
- (id)uploadServerPath;
- (void)setUploadServerPath:;
- (id)filePathList;
- (void)setFilePathList:;
- (id)videoUploadExtra;
- (void)setVideoUploadExtra:;
- (BOOL)useUploaderV2;
- (void)setUseUploaderV2:;
- (long long)fileType;
- (id)init;
- (id)authInfo;
- (void)setFileType:;
- (void).cxx_destruct;
- (void)setAuthInfo:;
+ (id)modelCustomPropertyMapper;
@end
