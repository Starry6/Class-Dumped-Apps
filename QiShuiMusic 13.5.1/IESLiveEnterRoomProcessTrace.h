@interface IESLiveEnterRoomProcessTrace : NSObject
@property (nonatomic) NSMutableDictionary items;
@property (nonatomic) IESLiveEnterRoomProcessItem currentProcessItem;
@property (nonatomic) <HTSKVStore> trackKVStore;
@property (nonatomic) IESLiveLeaveRoomStatInfo leaveRoomStatInfo;
- (void)checkLastLeaveRoom;
- (void)closeRoom:manualType:exceptionType:extra:;
- (id)currentProcessItem;
- (void)enterFailRoom:exceptionType:extra:;
- (id)itemWithIndex:needCreate:;
- (id)leaveRoomStatInfo;
- (void)recordFirstFrameRenderWithRoom:firstFrame:extra:;
- (void)recordRoom:extra:;
- (void)recordRoom:processStage:;
- (void)recordRoom:roomInfoBlock:;
- (void)setCurrentProcessItem:;
- (void)setLeaveRoomStatInfo:;
- (void)setTrackKVStore:;
- (void)traceStartEnterRoom:;
- (id)trackKVStore;
- (void)updateRoomProcessRecord:;
- (id)init;
- (id)items;
- (void)setItems:;
- (void)clear;
- (void).cxx_destruct;
@end
