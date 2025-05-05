@interface IESLiveInvisibleFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveInvisibleStore store;
- (void)componentCreate;
- (void)componentMount;
- (void)setStore:;
- (void).cxx_destruct;
- (id)store;
+ (BOOL)isMixed;
@end
