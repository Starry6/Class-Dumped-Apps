@interface IESLiveRoomDI : IESLiveDI
@property (nonatomic) @ roomService;
@property (nonatomic) Protocol roomServiceProtocol;
- (void)setRoomService:;
- (id)cacheObjectWithProtocol:;
- (id)getRoomService;
- (id)roomService;
- (id)roomServiceProtocol;
- (void)setRoomServiceProtocol:;
- (void)setUp;
- (void)dealloc;
- (void).cxx_destruct;
@end
