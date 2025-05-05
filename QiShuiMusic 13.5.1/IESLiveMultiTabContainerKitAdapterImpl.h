@interface IESLiveMultiTabContainerKitAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addAttributesFromRoom:trackContext:;
- (BOOL)isEnableContainerKit;
- (void)moveBottomContainerToMultiTabWithMainContainer:toolbarContainer:;
- (void)moveBottomContainerToRoomContainer;
- (double)bottomOffset;
@end
