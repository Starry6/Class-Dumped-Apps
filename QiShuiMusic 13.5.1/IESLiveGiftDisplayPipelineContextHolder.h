@interface IESLiveGiftDisplayPipelineContextHolder : NSObject
@property (nonatomic) BOOL isAllMic;
@property (nonatomic) HTSLiveUser toUser;
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) Q currentInteractiveScene;
@property (nonatomic) NSMutableSet assetCheckNotPassIds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)assetCheckNotPassIds;
- (unsigned long long)currentInteractiveScene;
- (BOOL)isAllMic;
- (void)setAssetCheckNotPassIds:;
- (void)setCurrentInteractiveScene:;
- (void)setIsAllMic:;
- (void)setToUser:;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
- (id)toUser;
@end
