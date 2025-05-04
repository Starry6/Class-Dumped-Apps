@interface AWERepoImageTemplateInfoModel : NSObject
@property (nonatomic) NSString uniqueId;
@property (nonatomic) NSString originImgPath;
@property (nonatomic) NSString imageTemplateId;
@property (nonatomic) NSString editDataInfo;
@property (nonatomic) NSString editDataInfoPath;
@property (nonatomic) NSString mediaId;
- (id)originImgPath;
- (void)setOriginImgPath:;
- (id)imageTemplateId;
- (void)setImageTemplateId:;
- (void)setEditDataInfoPath:;
- (id)editDataInfoPath;
- (void)setEditDataInfo:;
- (id)editDataInfo;
- (id)init;
- (void)setUniqueId:;
- (id)uniqueId;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)mediaId;
- (void)setMediaId:;
@end
