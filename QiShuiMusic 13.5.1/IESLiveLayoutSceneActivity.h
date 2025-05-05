@interface IESLiveLayoutSceneActivity : NSObject
@property (nonatomic) <IESLiveLayoutViewProvider> provider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)layoutDHRightTop;
- (void)layoutPluginIfNeed;
- (void)layoutRightVerticalViewsWithTypes:padding:rightMargin:;
- (BOOL)shouldLayoutKTVIndicator;
- (void)setProvider:;
- (unsigned long long)currentScene;
- (id)provider;
- (void).cxx_destruct;
- (id)edgeInsets:;
@end
