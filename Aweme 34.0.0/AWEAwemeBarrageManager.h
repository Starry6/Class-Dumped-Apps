@interface AWEAwemeBarrageManager : NSObject
@property (nonatomic) NSMutableDictionary taskDict;
@property (nonatomic) NSMutableDictionary deletedCommentDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addNoti;
- (void)setTaskDict:;
- (void)deleteCommentWithNotification:;
- (void)p_initBarrageListWithModel:;
- (void)removeDeletedCommentArrayInAweme:;
- (void)requestBarrageListWithAweme:commentCount:completion:;
- (id)deletedCommentDict;
- (void)setDeletedCommentDict:;
- (void)removeAwemeBarrageWithModel:atIndexSet:;
- (void)recordDeletedComments:inAweme:;
- (void)resetAwemeBarrageListRequest:;
- (void)fetchAwemeBarrageListWithModel:preprocessBlock:completion:;
- (void)insertAwemeBarrageWithModel:barrageModel:atIndex:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)taskDict;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
