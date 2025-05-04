@interface AWEPOIHeaderContentTabInfoModel : AWEBaseApiModel
@property (nonatomic) NSString tabID;
@property (nonatomic) q tabType;
@property (nonatomic) NSString tabName;
@property (nonatomic) q tabCount;
@property (nonatomic) NSString textGradient;
@property (nonatomic) NSString bgGradient;
@property (nonatomic) AWEPOIHeaderContentTabContentModel contentItem;
@property (nonatomic) BOOL hasTrackShowEvent;
- (long long)tabType;
- (void)setTabType:;
- (void)setTabID:;
- (BOOL)hasTrackShowEvent;
- (void)setHasTrackShowEvent:;
- (void)setTextGradient:;
- (id)bgGradient;
- (void)setBgGradient:;
- (void).cxx_destruct;
- (id)textGradient;
- (void)setContentItem:;
- (id)contentItem;
- (id)tabID;
- (id)tabName;
- (void)setTabName:;
- (void)setTabCount:;
- (long long)tabCount;
+ (id)JSONKeyPathsByPropertyKey;
@end
