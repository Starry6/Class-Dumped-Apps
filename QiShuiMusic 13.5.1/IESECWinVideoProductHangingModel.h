@interface IESECWinVideoProductHangingModel : MTLModel
@property (nonatomic) IESECWinVideoInfo video;
@property (nonatomic) IESECRelationGoodsModel product;
@property (nonatomic) NSString aweme;
@property (nonatomic) BOOL showProductDetail;
@property (nonatomic) BOOL isContinuePlay;
@property (nonatomic) NSString bizTag;
@property (nonatomic) NSString sceneTag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweme;
- (id)bizTag;
- (BOOL)isContinuePlay;
- (id)sceneTag;
- (void)setAweme:;
- (void)setBizTag:;
- (void)setIsContinuePlay:;
- (void)setSceneTag:;
- (void)setShowProductDetail:;
- (BOOL)showProductDetail;
- (void).cxx_destruct;
- (void)setVideo:;
- (id)video;
- (id)product;
- (void)setProduct:;
+ (id)JSONKeyPathsByPropertyKey;
@end
