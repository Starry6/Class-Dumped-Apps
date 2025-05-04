@interface AWEInspirationAwemeListDataController : AWEListDataController
@property (nonatomic) NSString offset;
@property (nonatomic) NSString musicID;
@property (nonatomic) AWEAwemeModel enterModel;
@property (nonatomic) Q inspirationType;
- (id)musicID;
- (void)setEnterModel:;
- (id)enterModel;
- (void)setMusicID:;
- (id)networkRequestCommonParams;
- (unsigned long long)inspirationType;
- (void)weakBindInspirationModel:;
- (void)setOffset:;
- (id)offset;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
