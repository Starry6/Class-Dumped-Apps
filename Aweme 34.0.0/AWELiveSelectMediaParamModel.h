@interface AWELiveSelectMediaParamModel : IESLiveBridgeModel
@property (nonatomic) q mode;
@property (nonatomic) NSNumber imageCountLimit;
@property (nonatomic) NSNumber videoCountLimit;
@property (nonatomic) NSNumber maxImageFileSize;
@property (nonatomic) NSNumber durationLimit;
@property (nonatomic) BOOL videoNeedCoverData;
@property (nonatomic) NSString hintText;
- (BOOL)modelCustomTransformFromDictionary:;
- (id)hintText;
- (void)setDurationLimit:;
- (id)videoCountLimit;
- (id)maxImageFileSize;
- (void)setVideoCountLimit:;
- (void)setMaxImageFileSize:;
- (id)imageCountLimit;
- (void)setImageCountLimit:;
- (BOOL)videoNeedCoverData;
- (void)setVideoNeedCoverData:;
- (id)init;
- (void)setMode:;
- (long long)mode;
- (void).cxx_destruct;
- (id)durationLimit;
- (void)setHintText:;
+ (id)modelCustomPropertyMapper;
@end
