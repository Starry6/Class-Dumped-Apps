@interface AWEStudioVideoPublishExtraModel : NSObject
@property (nonatomic) NSString ironManID;
@property (nonatomic) NSString ironManPath;
@property (nonatomic) NSString ironManTitle;
@property (nonatomic) NSString ironManDescription;
@property (nonatomic) NSString aliasID;
@property (nonatomic) NSString videoSource;
@property (nonatomic) NSString imageUrl;
@property (nonatomic) NSString cardCore;
@property (nonatomic) NSDictionary extraInfo;
- (id)ironManTitle;
- (id)ironManID;
- (id)initWithDic:;
- (id)aliasID;
- (void)setAliasID:;
- (void)setIronManTitle:;
- (id)ironManDescription;
- (void)setIronManDescription:;
- (void)setupModelWithDic:;
- (id)ironManPath;
- (id)cardCore;
- (id)toUpdateDictionary;
- (void)setIronManID:;
- (void)setIronManPath:;
- (void)setCardCore:;
- (id)appModel;
- (id)initWithAppModel:;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)imageUrl;
- (void)setImageUrl:;
- (void)setVideoSource:;
- (id)videoSource;
- (id)extraInfo;
- (void)setExtraInfo:;
@end
