@interface AWEHPSideBarCommonViewFactoryService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)createSideBarStencilViewWithItemContext:withDataModel:;
+ (id)createSideBarStencilCustomModuleViewWithItemContext:withDataModel:withDetailView:;
+ (id)createSideBarStencilCustomModuleViewWithItemContext:withDataModel:withDetailView:withConfig:;
+ (id)createSideBarVCBackgroundImageViewWithFrame:;
+ (id)createSideBarCellImageView;
+ (id)createSideBarCellImageViewWithFrame:;
+ (id)createSideBarCellImageViewWithImage:;
+ (id)p_createProfileSideBarStencilViewWithItemContext:withDataModel:;
+ (id)p_createSideBarStencilViewWithItemContext:withDataModel:;
@end
