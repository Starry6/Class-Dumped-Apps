@interface IESLiveLinkmicPreStreamUserService : NSObject
@property (nonatomic) IESLiveMultiInteractList listModel;
@property (nonatomic) NSArray seiArray;
@property (nonatomic) HTSLiveUser roomOwner;
@property (nonatomic) <IESLiveLinkmicPreStreamUserServiceDelegate> delegate;
- (BOOL)isEqualToNewList:;
- (id)pr_logWithArray:;
- (id)seiArray;
- (void)setListModel:;
- (void)setSeiArray:;
- (void)updateListModel:;
- (BOOL)updateSomeoneSpeaking:talking:;
- (void)updateWithGrids:;
- (void)setDelegate:;
- (id)listModel;
- (id)delegate;
- (void).cxx_destruct;
- (id)roomOwner;
- (void)setRoomOwner:;
@end
