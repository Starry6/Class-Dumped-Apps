@interface IESLiveSmallWindowServiceAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) BOOL selfManage;
@property (nonatomic) BOOL manualHideSmallWindow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)switchResolution:complete:;
@end
