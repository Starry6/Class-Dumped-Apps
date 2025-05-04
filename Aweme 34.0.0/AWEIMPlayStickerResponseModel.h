@interface AWEIMPlayStickerResponseModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel topBgUrl;
@property (nonatomic) NSString panelTitle;
@property (nonatomic) NSArray effectList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)panelTitle;
- (void)setPanelTitle:;
- (id)topBgUrl;
- (void)setTopBgUrl:;
- (void).cxx_destruct;
- (id)effectList;
- (void)setEffectList:;
+ (id)topBgUrlJSONTransformer;
+ (id)effectListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
