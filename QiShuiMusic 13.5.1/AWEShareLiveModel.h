@interface AWEShareLiveModel : NSObject
@property (nonatomic) <AWEShareLiveRoomModelProtocol> room;
@property (nonatomic) <AWEShareLiveContentModelProtocol> content;
@property (nonatomic) AWELiveRoomModel mappedRoom;
@property (nonatomic) BOOL isPreLive;
- (BOOL)isPreLive;
- (id)mappedRoom;
- (void)setIsPreLive:;
- (void)setMappedRoom:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
@end
