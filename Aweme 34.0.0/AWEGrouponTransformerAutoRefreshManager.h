@interface AWEGrouponTransformerAutoRefreshManager : NSObject
@property (nonatomic) NSMutableDictionary sceneHandlesMap;
@property (nonatomic) AWEGrouponDynamicEventSubscriber transformerRefreshSubscriber;
@property (nonatomic) AWEGrouponDynamicEventSubscriber transformerShouldRefreshSubcriber;
- (void)handleByteSyncMsg:;
- (id)__stringWithInteger:;
- (void)setSceneHandlesMap:;
- (void)__registerTransformerRefreshJSBSubscriber;
- (long long)__timeFrequency;
- (id)sceneHandlesMap;
- (void)__recieveAutoRefreshMessage:;
- (void)setTransformerRefreshSubscriber:;
- (id)transformerRefreshSubscriber;
- (void)setTransformerShouldRefreshSubcriber:;
- (id)transformerShouldRefreshSubcriber;
- (void)__trackClientReceiveRefreshTransformerMsg:;
- (void)registerSceneType:sceneController:;
- (void)triggerAutoRefreshIfNeedsWithSceneType:;
- (BOOL)triggerUpdateCardDataIfNeedsWithSceneType:;
- (void)cleanAutoRefreshModelsWithSceneType:;
- (BOOL)enable;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)__settings;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
