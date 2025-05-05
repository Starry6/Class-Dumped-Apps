@interface TSBonjourBrowser : NSObject
@property (nonatomic) <TSBonjourBrowserDelegate> delegate;
@property (nonatomic) NSArray nodes;
- (id)init;
- (void)dealloc;
- (void)setNodes:;
- (void)setDelegate:;
- (id)nodes;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)stopBrowsing;
- (void)addedServiceWithName:regType:domain:onInterface:withFlags:;
- (void)removedServiceWithName:regType:domain:onInterface:withFlags:;
- (BOOL)startBrowsingWithError:;
@end
