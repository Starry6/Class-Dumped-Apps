@interface AWEEcommerceDynamicTabResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray tabs;
@property (nonatomic) NSString originTabList;
@property (nonatomic) BOOL needHideTab;
@property (nonatomic) AWESearchTabGuideResponse guide;
@property (nonatomic) BOOL showTabFilterCard;
- (id)originTabList;
- (void)setOriginTabList:;
- (BOOL)needHideTab;
- (BOOL)showTabFilterCard;
- (void)setNeedHideTab:;
- (void)setShowTabFilterCard:;
- (void).cxx_destruct;
- (id)tabs;
- (void)setTabs:;
- (id)guide;
- (void)setGuide:;
+ (id)tabsJSONTransformer;
+ (id)guideJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
