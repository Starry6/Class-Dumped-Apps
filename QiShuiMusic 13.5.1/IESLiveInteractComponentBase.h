@interface IESLiveInteractComponentBase : NSObject
@property (nonatomic) <IESLiveInteractComponentRoomContext> roomContext;
@property (nonatomic) <IESLiveInteractComponentContext> context;
@property (nonatomic) BOOL mounted;
@property (nonatomic) BOOL didJoinChannel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRoomContext:;
- (void)componentBindContext;
- (void)componentMount;
- (void)componentUnmount;
- (BOOL)didJoinChannel;
- (void)setDidJoinChannel:;
- (void)setMounted:;
- (id)context;
- (void).cxx_destruct;
- (void)setContext:;
- (BOOL)isMounted;
- (id)roomContext;
@end
