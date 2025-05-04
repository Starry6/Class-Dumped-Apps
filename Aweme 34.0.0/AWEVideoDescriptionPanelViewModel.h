@interface AWEVideoDescriptionPanelViewModel : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWEElementContainer leftContainer;
@property (nonatomic) <AWEAwemePlayInteractionRouterProtocol> router;
- (id)leftContainer;
- (void)setLeftContainer:;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)trackAuthorLabelClicked:;
- (id)videoDescription;
- (void)updateWithModel:leftContainer:;
- (void)onAuthorLabelClicked:clickType:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
- (id)router;
- (void)setRouter:;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
@end
