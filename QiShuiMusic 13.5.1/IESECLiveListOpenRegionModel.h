@interface IESECLiveListOpenRegionModel : MTLModel
@property (nonatomic) IESECLiveDynamicRegionModel listOpenCover;
@property (nonatomic) IESECLiveDynamicRegionModel listOpenTabContent;
@property (nonatomic) IESECLiveDynamicRegionModel listOpenTab;
@property (nonatomic) IESECLiveDynamicRegionModel listOpenTop;
@property (nonatomic) IESECLiveDynamicRegionModel listOpenFloatBottom;
@property (nonatomic) IESECLiveDynamicRegionModel listOpenSideBar;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)listOpenSideBar;
- (void)setListOpenTop:;
- (void)setListOpenTab:;
- (id)listOpenCover;
- (id)listOpenFloatBottom;
- (id)listOpenTab;
- (id)listOpenTabContent;
- (id)listOpenTop;
- (void)setListOpenCover:;
- (void)setListOpenFloatBottom:;
- (void)setListOpenSideBar:;
- (void)setListOpenTabContent:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
