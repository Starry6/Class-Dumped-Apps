@interface HTSLiveLayoutSceneAudio : NSObject
@property (nonatomic) NSMapTable viewTable;
@property (nonatomic) UIView containerView;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)layoutPluginIfNeed;
- (void)setIsAnchor:;
- (void)setViewTable:;
- (void)supportInfoForScene:container:isAnchor:;
- (id)viewOfType:;
- (id)viewTable;
- (id)containerView;
- (void)setContainerView:;
- (unsigned long long)currentScene;
- (BOOL)isAnchor;
- (void).cxx_destruct;
@end
