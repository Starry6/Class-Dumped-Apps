@interface AWEIMChatListCameraComponent : AWEIMComponentBase
@property (nonatomic) @? handleFilmFinishedTask;
@property (nonatomic) BOOL isInShootPage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)hostVC_viewWillDisappear;
- (void)p_handleVideoRecordFinishedNty:;
- (void)p_handlePhotoRecordFinishedNty:;
- (void)p_removeRecordObserver;
- (void)transferToShootWithChat:completion:;
- (BOOL)isInShootPage;
- (void)setIsInShootPage:;
- (void)transferToShootWithChat:extraParams:completion:;
- (id)p_getSyncedExtWithMessageType:extraInfo:;
- (void)setHandleFilmFinishedTask:;
- (id)handleFilmFinishedTask;
- (void).cxx_destruct;
@end
