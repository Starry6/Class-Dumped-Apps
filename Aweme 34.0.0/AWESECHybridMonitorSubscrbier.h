@interface AWESECHybridMonitorSubscrbier : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handlePiperDiscoveryEvent:;
- (void)handlePageEvent:;
- (void)handlePiperEventUsingDataMapping:;
- (void)handleAPIContextNotFoundEvent:;
- (void)handlePluginPerfEvent:;
- (void)_handleEvent:;
- (id)init;
- (void).cxx_destruct;
- (void)handleEvent:;
- (id)subscriberId;
@end
