@interface AWECodeGenCommentImageModel : AWEBaseDataModel
@property (nonatomic) AWECodeGenUrlModel originUrlModel;
@property (nonatomic) AWECodeGenUrlModel cropUrlModel;
@property (nonatomic) AWECodeGenUrlModel thumbUrlModel;
@property (nonatomic) AWECodeGenUrlModel mediumUrlModel;
@property (nonatomic) AWECodeGenUrlModel downloadUrlModel;
@property (nonatomic) NSDictionary liveVideo;
- (id)originUrlModel;
- (id)liveVideo;
- (void)setLiveVideo:;
- (void)setOriginUrlModel:;
- (id)cropUrlModel;
- (void)setCropUrlModel:;
- (id)thumbUrlModel;
- (void)setThumbUrlModel:;
- (id)mediumUrlModel;
- (void)setMediumUrlModel:;
- (id)downloadUrlModel;
- (void)setDownloadUrlModel:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
