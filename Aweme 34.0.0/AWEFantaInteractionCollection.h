@interface AWEFantaInteractionCollection : NSObject
@property (nonatomic) NSMutableDictionary sceneInteractionDict;
@property (nonatomic) NSMutableDictionary sceneMaxRecordVideoCountDict;
- (void)setSceneMaxRecordVideoCountDict:;
- (void)updateInteractionCountWithInteraction:referString:;
- (long long)interactionCountWithInteraction:referString:;
- (void)cleanInteractionCollection;
- (void)onFeedVideoSwitch:;
- (id)sceneInteractionDict;
- (id)sceneMaxRecordVideoCountDict;
- (void)setSceneInteractionDict:;
- (id)init;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)copyWithZone:;
@end
