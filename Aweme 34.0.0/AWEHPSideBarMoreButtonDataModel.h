@interface AWEHPSideBarMoreButtonDataModel : AWEHPSideBarStencilViewDataModel
@property (nonatomic) NSString backTitle;
@property (nonatomic) AWELeftSideBarModel sideBarModel;
- (id)backTitle;
- (void)setBackTitle:;
- (id)sideBarModel;
- (void)setSideBarModel:;
- (void).cxx_destruct;
+ (id)sideBarModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
