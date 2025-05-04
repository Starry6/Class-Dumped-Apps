@interface AWEFeedContainerLandingStoreModel : NSObject
@property (nonatomic) NSString tabId;
@property (nonatomic) AWEHPTabLandingModel model;
@property (nonatomic) @? completionBlock;
@property (nonatomic) @? exitBlock;
- (id)exitBlock;
- (void)setExitBlock:;
- (void)setModel:;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (id)model;
- (void).cxx_destruct;
- (void)setTabId:;
- (id)tabId;
@end
