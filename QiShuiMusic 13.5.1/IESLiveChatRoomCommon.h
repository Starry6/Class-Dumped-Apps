@interface IESLiveChatRoomCommon : IESLiveRoomComponent
@property (nonatomic) double startTime;
@property (nonatomic) IESLiveChatRoomTracker chatRoomTracker;
@property (nonatomic) IESLiveChatRoomTrackerContext chatRoomTrackerContext;
@property (nonatomic) IESLiveStatusDispatcher statusDispatcher;
@property (nonatomic) BOOL isAnchor;
- (id)chatRoomTracker;
- (void)registChatRoomStatusDispatcher:;
- (void)changeStatus:;
- (id)chatRoomTrackerContext;
- (void)componentBindService;
- (void)setChatRoomTracker:;
- (void)setChatRoomTrackerContext:;
- (void)setIsAnchor:;
- (void)setStatusDispatcher:;
- (id)statusDispatcher;
- (void)trackCustomWithEventName:;
- (void)trackWithEventName:;
- (void)trackWithEventName:andExtParams:;
- (void)setStartTime:;
- (double)startTime;
- (BOOL)isAnchor;
- (void).cxx_destruct;
@end
