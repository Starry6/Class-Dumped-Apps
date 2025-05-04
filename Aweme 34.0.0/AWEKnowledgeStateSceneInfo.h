@interface AWEKnowledgeStateSceneInfo : NSObject
@property (nonatomic) AWEKnowledgeStateSceneToken sceneToken;
@property (nonatomic) UIViewController<AFDRichContentContainerViewControllerProtocol> richContentContainer;
@property (nonatomic) NSString sceneType;
@property (nonatomic) NSMutableDictionary cardInfo;
@property (nonatomic) BOOL needUpdateToCard;
@property (nonatomic) BOOL enableQuickStart;
@property (nonatomic) NSMutableDictionary stateInfo;
- (id)richContentContainer;
- (void)setRichContentContainer:;
- (id)sceneToken;
- (void)setSceneToken:;
- (BOOL)needUpdateToCard;
- (void)setNeedUpdateToCard:;
- (BOOL)enableQuickStart;
- (void)setEnableQuickStart:;
- (void).cxx_destruct;
- (id)sceneType;
- (void)setSceneType:;
- (id)stateInfo;
- (id)cardInfo;
- (void)setCardInfo:;
- (void)setStateInfo:;
@end
