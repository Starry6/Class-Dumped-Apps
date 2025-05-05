@interface IESLiveSmallWindowAPI : HTSLiveApi
@property (nonatomic) NSNumber roomID;
- (id)initWithRoomID:;
- (void)checkState:finished:retryCount:;
- (void)checkState:finished:;
- (void)fetchRoomInfoWithRoomID:completion:;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:;
@end
