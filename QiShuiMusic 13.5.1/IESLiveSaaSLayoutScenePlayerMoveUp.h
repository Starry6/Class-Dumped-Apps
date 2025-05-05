@interface IESLiveSaaSLayoutScenePlayerMoveUp : NSObject
@property (nonatomic) double messageOriginY;
@property (nonatomic) <HTSLiveSaaSUserEnterAction> userEnterDispatcher;
@property (nonatomic) NSMapTable viewTable;
@property (nonatomic) UIView containerView;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithMessageOriginY:;
- (void)layoutPluginIfNeed;
- (double)messageOriginY;
- (void)setIsAnchor:;
- (void)setMessageOriginY:;
- (void)setUserEnterDispatcher:;
- (void)setViewTable:;
- (void)supportInfoForScene:container:isAnchor:;
- (id)userEnterDispatcher;
- (id)viewOfType:;
- (id)viewTable;
- (id)containerView;
- (void)setContainerView:;
- (unsigned long long)currentScene;
- (BOOL)isAnchor;
- (void).cxx_destruct;
@end
