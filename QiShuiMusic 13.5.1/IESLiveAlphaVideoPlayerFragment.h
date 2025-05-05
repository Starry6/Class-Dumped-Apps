@interface IESLiveAlphaVideoPlayerFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveAlphaVideoPlayerStore store;
- (void)componentCreate;
- (void)componentBindService;
- (void)componentMount;
- (void)setStore:;
- (void).cxx_destruct;
- (id)store;
+ (BOOL)isMixed;
+ (BOOL)componentShouldActive:;
@end
