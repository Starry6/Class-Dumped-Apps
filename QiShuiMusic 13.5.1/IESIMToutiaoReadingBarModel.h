@interface IESIMToutiaoReadingBarModel : IESIMBaseApiModel
@property (nonatomic) NSString articleID;
@property (nonatomic) IESIMURLModel iconURLModel;
@property (nonatomic) NSString articleTitle;
@property (nonatomic) NSString articleOpenURL;
@property (nonatomic) NSString webOpenURL;
@property (nonatomic) NSString extraParamsStr;
@property (nonatomic) NSString openAppSchema;
@property (nonatomic) NSString tag;
- (id)articleOpenURL;
- (id)extraParamsStr;
- (id)iconURLModel;
- (id)openAppSchema;
- (void)setArticleOpenURL:;
- (void)setExtraParamsStr:;
- (void)setIconURLModel:;
- (void)setOpenAppSchema:;
- (void)setWebOpenURL:;
- (id)webOpenURL;
- (void)setArticleID:;
- (id)tag;
- (id)articleID;
- (void)setTag:;
- (void).cxx_destruct;
- (id)articleTitle;
- (void)setArticleTitle:;
+ (id)iconURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
