@interface HTSLiveDetailRouterAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)closeRoomByForce:;
- (BOOL)closeRoomByForce:callTrace:;
- (BOOL)closeRoomByForce:reason:callTrace:;
- (BOOL)closeRoomByForce:reason:trace:completion:callTrace:;
@end
