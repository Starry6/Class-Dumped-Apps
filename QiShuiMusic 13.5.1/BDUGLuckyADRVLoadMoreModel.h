@interface BDUGLuckyADRVLoadMoreModel : BDUGLuckyJSONModel
@property (nonatomic) BOOL canShow;
@property (nonatomic) NSString token;
@property (nonatomic) BDUGLuckyADRVInfoModel infoModel;
- (BOOL)canShow;
- (id)infoModel;
- (void)setCanShow:;
- (void)setInfoModel:;
- (id)token;
- (id)initWithDictionary:error:;
- (void)setToken:;
- (void).cxx_destruct;
@end
