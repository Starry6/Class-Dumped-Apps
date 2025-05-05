@interface ByteRTCPushSingleStreamParam : NSObject
@property (nonatomic) NSString url;
@property (nonatomic) NSString roomId;
@property (nonatomic) NSString userId;
@property (nonatomic) BOOL isScreen;
- (BOOL)isScreen;
- (id)roomId;
- (void)setIsScreen:;
- (void)setRoomId:;
- (id)url;
- (id)userId;
- (void)setUrl:;
- (void).cxx_destruct;
- (void)setUserId:;
@end
