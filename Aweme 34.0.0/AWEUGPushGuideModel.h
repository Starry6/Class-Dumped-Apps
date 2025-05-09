@interface AWEUGPushGuideModel : NSObject
@property (nonatomic) BOOL opened;
@property (nonatomic) BOOL needShow;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) BOOL needImage;
@property (nonatomic) NSString imageURL;
@property (nonatomic) UIImage defaultGuideImage;
@property (nonatomic) NSString negativeBtnText;
@property (nonatomic) NSString positiveBtnText;
@property (nonatomic) BOOL isShowHalfAlert;
@property (nonatomic) UIImage guideImage;
@property (nonatomic) BOOL noticeTop;
@property (nonatomic) NSString pushTitle;
@property (nonatomic) NSString pushContent;
@property (nonatomic) NSString pushImageUrl;
@property (nonatomic) NSString singleScene;
@property (nonatomic) BOOL openAllScene;
@property (nonatomic) AWEUGPushGuideVideoModel unselectedVideoModel;
@property (nonatomic) AWEUGPushGuideVideoModel selectedVideoModel;
@property (nonatomic) AWEUGPushGuideIncentiveModel incentiveModel;
@property (nonatomic) NSArray dynamicUIModels;
@property (nonatomic) NSDictionary pushClickPayload;
- (BOOL)needShow;
- (void)setNeedShow:;
- (id)unselectedVideoModel;
- (id)incentiveModel;
- (id)negativeBtnText;
- (BOOL)noticeTop;
- (id)positiveBtnText;
- (id)pushTitle;
- (id)pushContent;
- (id)pushImageUrl;
- (id)initFromPushCommonModel:;
- (id)initFromSubscribeCommonModel:;
- (id)singleScene;
- (BOOL)openAllScene;
- (void)setSingleScene:;
- (void)setOpenAllScene:;
- (void)setPushClickPayload:;
- (BOOL)needImage;
- (void)setNeedImage:;
- (void)setNegativeBtnText:;
- (void)setPositiveBtnText:;
- (void)parseForPushGuideModel:extraModel:;
- (void)setNoticeTop:;
- (void)setPushTitle:;
- (void)setPushContent:;
- (void)setPushImageUrl:;
- (void)setUnselectedVideoModel:;
- (void)setSelectedVideoModel:;
- (void)setIncentiveModel:;
- (void)setOpened:;
- (id)defaultGuideImage;
- (void)setDefaultGuideImage:;
- (BOOL)isShowHalfAlert;
- (void)setIsShowHalfAlert:;
- (id)selectedVideoModel;
- (id)dynamicUIModels;
- (void)setDynamicUIModels:;
- (id)pushClickPayload;
- (id)content;
- (void)setContent:;
- (id)imageURL;
- (void).cxx_destruct;
- (id)title;
- (void)setImageURL:;
- (void)setTitle:;
- (id)guideImage;
- (void)setGuideImage:;
- (BOOL)opened;
@end
