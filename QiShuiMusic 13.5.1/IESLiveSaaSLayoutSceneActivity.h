@interface IESLiveSaaSLayoutSceneActivity : NSObject
@property (nonatomic) <IESLiveSaaSLayoutContainerProvider> containerProvider;
@property (nonatomic) <IESLiveSaaSLayoutViewProvider> provider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)layoutDHRightTop;
- (void)layoutPluginIfNeed;
- (void)layoutRightVerticalViewsWithTypes:padding:rightMargin:;
- (void)setContainerProvider:;
- (BOOL)shouldLayoutKTVIndicator;
- (void)setProvider:;
- (unsigned long long)currentScene;
- (id)containerProvider;
- (id)provider;
- (void).cxx_destruct;
- (id)edgeInsets:;
@end
