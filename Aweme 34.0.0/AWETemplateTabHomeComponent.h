@interface AWETemplateTabHomeComponent : AWEUserHomeBaseComponent
@property (nonatomic) UIViewController<AWETemplateArtistViewControllerProtocol> templateVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabHelper;
- (id)supportTabTypes;
- (id)tabViewControllerForType:;
- (id)tabNameForLogWithType:;
- (id)profileTabModelForType:;
- (BOOL)shouldShowForType:;
- (void)onResetUI;
- (id)templateVC;
- (id)templateTabModel;
- (void)setTemplateVC:;
- (id)user;
- (void).cxx_destruct;
- (id)title;
@end
