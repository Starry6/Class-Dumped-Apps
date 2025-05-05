@interface IESLiveComponentBatchInfo : NSObject
@property (nonatomic) IESliveComponentBatchItem headBatchItem;
@property (nonatomic) NSMutableSet allComponentNames;
@property (nonatomic) IESliveComponentBatchItem currentBatchItem;
@property (nonatomic) BOOL finished;
- (void)deleteLinkItem:;
- (id)allComponentNames;
- (BOOL)canLoadCurrent;
- (BOOL)containCurrentWithName:;
- (id)currentBatchItem;
- (void)deleteItemNames:insertItem:isHead:;
- (void)goNext;
- (id)headBatchItem;
- (void)recordComponentList:;
- (void)setAllComponentNames:;
- (void)setCurrentBatchItem:;
- (void)setHeadBatchItem:;
- (void)setUpRealComponents:;
- (void)setFinished:;
- (id)init;
- (BOOL)finished;
- (void).cxx_destruct;
@end
