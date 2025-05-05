@interface IESLiveRealStreamingProviderAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bitrateHandler;
- (id)interactStreamer;
- (id)normalStreamer;
- (void)sendSEIInfo:withKey:;
- (id)targetInstance;
@end
