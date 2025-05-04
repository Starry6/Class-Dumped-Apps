@interface AWEDoubleColumnSearchMerchandiseVideoInfo : AWEBaseApiModel
@property (nonatomic) NSString videoID;
@property (nonatomic) NSString mainUrl;
@property (nonatomic) NSString backupUrl;
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) NSNumber duration;
@property (nonatomic) NSNumber urlExpiredTime;
@property (nonatomic) q awemeType;
- (long long)awemeType;
- (void)setAwemeType:;
- (id)urlExpiredTime;
- (void)setUrlExpiredTime:;
- (id)mainUrl;
- (void)setMainUrl:;
- (id)backupUrl;
- (void)setBackupUrl:;
- (void)setHeight:;
- (void)setWidth:;
- (void)setDuration:;
- (id)width;
- (void).cxx_destruct;
- (id)duration;
- (id)height;
- (id)videoID;
- (void)setVideoID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
