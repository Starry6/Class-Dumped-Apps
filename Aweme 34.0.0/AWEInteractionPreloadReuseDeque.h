@interface AWEInteractionPreloadReuseDeque : NSObject
@property (nonatomic) NSMutableArray deque;
@property (nonatomic) Q currentIndex;
- (id)deque;
- (id)interactionPreloadModelWithIndex:;
- (long long)countOfDeque;
- (void)addObjectToBack:;
- (void)addObjectToFront:;
- (id)removeObjectFromFront;
- (id)removeObjectFromBack;
- (void)resetDeque;
- (void)backupResetDeque;
- (void)backupResetDequeV2;
- (void)setDeque:;
- (id)init;
- (void)setCurrentIndex:;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (unsigned long long)currentIndex;
@end
