@interface AWENovelReaderSearchPlugin : BDNovelReaderBasePlugin
@property (nonatomic) BDNovelReaderLastLeavingObject lastLeaveObject;
- (void)pluginReaderVCPageChangeWithReadModel:curPageContext:targetPageContext:changeInfo:;
- (void)pluginReaderDidDisAppear;
- (void)pluginReaderWillAppear;
- (void)pluginReaderVCDealloc;
- (void)refreshPageContextLeaveStringWithPageContext:;
- (void)sendEventToLynx;
- (id)lastLeaveObject;
- (void)setLastLeaveObject:;
- (void).cxx_destruct;
+ (void)managerDidFirstStart;
@end
