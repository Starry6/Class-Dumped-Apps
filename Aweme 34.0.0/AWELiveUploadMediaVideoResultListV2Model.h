@interface AWELiveUploadMediaVideoResultListV2Model : IESLiveBridgeModel
@property (nonatomic) NSString originVid;
@property (nonatomic) NSString videoInfo;
@property (nonatomic) NSString encryptionMeta;
- (id)videoInfo;
- (void)setVideoInfo:;
- (id)encryptionMeta;
- (void)setEncryptionMeta:;
- (id)originVid;
- (void)setOriginVid:;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
