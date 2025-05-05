@interface IESLiveInteractionEmojiAPI : HTSLiveApi
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) NSOperationQueue downloadQueue;
@property (nonatomic) NSMutableDictionary downloadTasks;
- (id)apiPath:;
- (void)downloadEmojiSound:emojiID:completion:;
- (void)fetchEmojiList:scene:emojiCategory:completion:;
- (void)fetchInteractEntranceActivityBtnsForUserId:completion:;
- (void)fetchInteractGuestHonorInfoForUserId:type:completion:;
- (id)filePathWithEmoji:emojiID:prefix:;
- (void)removeEmojiAudioCache:emojiID:;
- (void)sendEmojiID:toUserID:type:action:scene:completion:;
- (id)downloadQueue;
- (void)setDownloadQueue:;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
- (id)downloadTasks;
- (void)setDownloadTasks:;
- (id)initWithRoom:;
@end
