@interface AWELiveOuterEnterRoomServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasCreatedLiveRoom;
- (unsigned long long)forbidEnterRoomForLiveRoomMode:;
- (unsigned long long)smallWindowForbidEnterRoomWithRoomId:;
- (BOOL)forbidStartLiveRoom;
- (unsigned long long)forbidEnterRoomIfNeededWithRoomId:anchorId:allowEnterSameRoomID:liveRoomModel:;
@end
