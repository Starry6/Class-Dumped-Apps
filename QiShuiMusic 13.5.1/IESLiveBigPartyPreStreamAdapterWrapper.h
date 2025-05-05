@interface IESLiveBigPartyPreStreamAdapterWrapper : NSObject
@property (nonatomic) NSMapTable currentThemeDataMap;
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) HTSLiveRoom liveRoomModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLiveInteractionAsyncResourceLoader> asyncResourceLoader;
- (void)asyncLoadResourceUsingBlock:;
- (id)asyncResourceLoader;
- (id)currentThemeDataMap;
- (BOOL)isAnchorWithUserID:;
- (id)liveRoomModel;
- (id)roomForStage;
- (id)roomModel;
- (void)setAsyncResourceLoader:;
- (void)setCurrentThemeDataMap:;
- (void)setLiveRoomModel:;
- (void)setRoomModel:;
- (void)updateRoomService:;
- (void)updateRoomThemeData:;
- (void)updateRoomThemeIconMics:;
- (void)updateRoomThemeImage:;
- (void).cxx_destruct;
@end
