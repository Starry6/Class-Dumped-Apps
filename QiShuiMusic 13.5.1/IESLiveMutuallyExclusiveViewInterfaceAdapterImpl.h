@interface IESLiveMutuallyExclusiveViewInterfaceAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addItem:priority:;
- (void)removeItem:;
- (void)addItem:;
- (void)removeItemWithIdentifier:;
+ (id)targetProtocol;
@end
