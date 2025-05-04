@interface AWEStickerPickerControllerSecurityTipsPlugin : NSObject
@property (nonatomic) <ACCRecorderViewContainer> viewContainer;
@property (nonatomic) <ACCRecordSidebarService> sidebarService;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) <AWEStickerViewLayoutManagerProtocol> layoutManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sidebarService;
- (void)setSidebarService:;
- (void)p_updateBarItem;
- (void)controllerViewDidLoad:;
- (void)controller:willShowOnView:;
- (void)controller:willDimissFromView:;
- (void)showSecurityTipsIfNeeded;
- (void)handleTapOnSecurityTips;
- (id)layoutManager;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)initWithServiceProvider:;
- (void)setIconImageView:;
- (void)setLayoutManager:;
- (void)setViewContainer:;
- (id)viewContainer;
@end
