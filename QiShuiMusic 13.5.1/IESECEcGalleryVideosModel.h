@interface IESECEcGalleryVideosModel : IESLiveBridgeModel
@property (nonatomic) NSString mainUrl;
@property (nonatomic) NSString backupUrl;
@property (nonatomic) NSString vid;
@property (nonatomic) NSString posterUrl;
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) NSNumber duration;
@property (nonatomic) BOOL needAddCookie;
- (id)mainUrl;
- (void)setVid:;
- (id)vid;
- (id)backupUrl;
- (BOOL)needAddCookie;
- (id)posterUrl;
- (void)setBackupUrl:;
- (void)setMainUrl:;
- (void)setNeedAddCookie:;
- (void)setPosterUrl:;
- (void)setWidth:;
- (id)height;
- (void)setDuration:;
- (id)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (id)duration;
+ (id)modelCustomPropertyMapper;
@end
