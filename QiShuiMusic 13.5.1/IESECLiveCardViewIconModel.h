@interface IESECLiveCardViewIconModel : MTLModel
@property (nonatomic) IESECLiveImageURLModel topIcon;
@property (nonatomic) NSString tagIconURLString;
@property (nonatomic) NSString tagPresaleText;
@property (nonatomic) NSDictionary buyButtonURLMap;
@property (nonatomic) BOOL buyImageIsWide;
@property (nonatomic) NSNumber productType;
@property (nonatomic) Q liveProtectType;
@property (nonatomic) IESECLiveGoodsRitTagTrackModel tagTrack;
@property (nonatomic) IESECLiveCardViewBackgroundModel backgroundViewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)buyButtonURLMap;
- (unsigned long long)liveProtectType;
- (id)topIcon;
- (id)backgroundViewModel;
- (BOOL)buyImageIsWide;
- (void)setBackgroundViewModel:;
- (void)setBuyButtonURLMap:;
- (void)setBuyImageIsWide:;
- (void)setLiveProtectType:;
- (void)setTagIconURLString:;
- (void)setTagPresaleText:;
- (void)setTagTrack:;
- (void)setTopIcon:;
- (id)tagIconURLString;
- (id)tagPresaleText;
- (id)tagTrack;
- (void)setProductType:;
- (id)productType;
- (void).cxx_destruct;
+ (id)backgroundViewModelJSONTransformer;
+ (id)tagTrackJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
