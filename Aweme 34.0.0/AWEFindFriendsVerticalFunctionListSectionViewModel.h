@interface AWEFindFriendsVerticalFunctionListSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) NSMutableArray models;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) q listType;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)aAWEUserProfileModuleServiceDOUYINLiteAdaper;
- (void)setupModels;
- (id)setupOneModel:;
- (long long)transferTypeStringToEnum:;
- (id)setupScanModel:;
- (id)setupFace2FaceModel:;
- (id)setupContactModel:;
- (id)setupWeChatModel:;
- (id)setupQQModel:;
- (id)modelFromJson:;
- (BOOL)canShowContactWhenLimitedStatus;
- (id)showOnceRule;
- (id)initWithListType:enterFrom:;
- (void)setModels:;
- (void).cxx_destruct;
- (id)models;
- (long long)listType;
- (void)setListType:;
+ (Class)aAWEUserProfileModuleServiceDOUYINLiteAdaperClass;
@end
