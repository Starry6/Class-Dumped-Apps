@interface AWEUserTabListModel : AWEBaseApiModel
@property (nonatomic) NSArray profileTabList;
@property (nonatomic) q profileLandingTab;
@property (nonatomic) NSArray profileTabListV2;
@property (nonatomic) AWECodeGenLandingSwitchEditInfoModel landingSwitchEditInfo;
- (id)profileTabList;
- (void)setProfileTabList:;
- (long long)profileLandingTab;
- (void)setProfileLandingTab:;
- (id)profileTabListV2;
- (void)setProfileTabListV2:;
- (id)landingSwitchEditInfo;
- (void)setLandingSwitchEditInfo:;
- (void).cxx_destruct;
+ (id)profileTabListV2JSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
