@interface UIInterfaceActionGroupViewController : UIViewController
@property (nonatomic) UIInterfaceActionGroup actionGroup;
@property (nonatomic) UIInterfaceActionGroupView actionGroupView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIInterfaceActionVisualStyle visualStyle;
@property (nonatomic) <UIInterfaceActionVisualStyleProviding> visualStyleProvider;
@property (nonatomic) BOOL springLoaded;
- (void)willTransitionToTraitCollection:withTransitionCoordinator:;
- (void)setVisualStyleProvider:;
- (BOOL)isSpringLoaded;
- (void)setSpringLoaded:;
- (void)viewWillDisappear:;
- (id)visualStyleProvider;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (void)loadView;
- (id)visualStyle;
- (void)interfaceAction:invokeActionHandler:completion:;
- (void)reloadVisualStyle;
- (id)defaultVisualStyleForTraitCollection:presentationStyle:;
- (id)actionGroup;
- (id)initWithActionGroup:;
- (id)actionGroupView;
@end
