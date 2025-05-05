@interface IESLiveActivityModuleShortTouchInterfaceAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)adjustToTempStateWidthWithItem:;
- (id)mixItem;
- (void)updateFeatures:;
- (long long)getTempStateDurationWithItem:strategy:;
- (void)requestToShowNormalStateWithItem:;
- (long long)requestToShowTempStateWithItem:strategy:;
- (id)targetInstance;
@end
