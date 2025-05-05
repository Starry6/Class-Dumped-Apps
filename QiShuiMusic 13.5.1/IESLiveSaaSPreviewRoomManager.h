@interface IESLiveSaaSPreviewRoomManager : NSObject
@property (nonatomic) NSHashTable delegates;
@property (nonatomic) q currentRoomIndex;
@property (nonatomic) @? previewRoomDidEnterBlock;
@property (nonatomic) @? preViewRoomDidLeaveBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)currentRoomIndex;
- (void)dispatchPreviewRoomDidEnterEvent;
- (void)dispatchPreviewRoomDidLeaveEvent;
- (void)moveDownTopContainer;
- (void)moveUpTopContainer;
- (void)preViewRoomDidLeave;
- (id)preViewRoomDidLeaveBlock;
- (void)previewRoomDidEnter;
- (id)previewRoomDidEnterBlock;
- (void)setCurrentRoomIndex:;
- (void)setPreViewRoomDidLeaveBlock:;
- (void)setPreviewRoomDidEnterBlock:;
- (id)init;
- (id)delegates;
- (void)setDelegates:;
- (void)registerDelegate:;
- (void).cxx_destruct;
- (void)unregisterDelegate:;
@end
