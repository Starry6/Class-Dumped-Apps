@interface AWEKnowledgeStateDataProvider : NSObject
@property (nonatomic) AWEKnowledgeStateCardInfo cardInfo;
@property (nonatomic) AWEKnowledgeStateSceneInfo sceneInfo;
@property (nonatomic) NSDictionary actionParam;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSceneInfo:;
- (id)sceneInfo;
- (id)stateValueForKey:;
- (id)initWithCardInfo:sceneInfo:actionParam:;
- (id)objectValueForKey:withType:;
- (id)abValueForKey:;
- (id)actionValueForKey:;
- (id)modelValueForKey:;
- (id)actionParam;
- (void)setActionParam:;
- (void).cxx_destruct;
- (id)cardInfo;
- (void)setCardInfo:;
@end
