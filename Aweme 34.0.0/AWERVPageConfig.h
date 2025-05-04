@interface AWERVPageConfig : NSObject
@property (nonatomic) <AWERVPagePlayerConfigProtocol> playerConfig;
@property (nonatomic) <AWERVPageMetaConfigProtocol> metaConfig;
@property (nonatomic) <AWERVPageListConfigProtocol> listConfig;
@property (nonatomic) <AWERVPageBottomConfigProtocol> bottomConfig;
@property (nonatomic) NSString preferTheme;
@property (nonatomic) BOOL hiddenBottomInteractView;
@property (nonatomic) BOOL forceInteractionViewMoveUp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPlayerConfig:;
- (id)playerConfig;
- (id)bottomConfig;
- (void)setBottomConfig:;
- (BOOL)hiddenBottomInteractView;
- (id)listConfig;
- (id)preferTheme;
- (id)metaConfig;
- (void)setMetaConfig:;
- (void)setListConfig:;
- (void)setPreferTheme:;
- (void)setHiddenBottomInteractView:;
- (BOOL)forceInteractionViewMoveUp;
- (void)setForceInteractionViewMoveUp:;
- (id)initWithParams:;
- (void).cxx_destruct;
@end
