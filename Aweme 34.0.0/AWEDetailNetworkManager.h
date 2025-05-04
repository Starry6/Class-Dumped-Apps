@interface AWEDetailNetworkManager : NSObject
@property (nonatomic) AWEDetailNetworkSafeArray fetchingArray;
@property (nonatomic) AWEDetailNetworkSafeDictionary requestTaskDic;
@property (nonatomic) AWEDetailNetworkSafeDictionary requestCompletionListDic;
- (id)fetchingArray;
- (id)requestTaskDic;
- (id)requestCompletionListDic;
- (void)addNewRequestKey:requestTask:completionBlock:;
- (void)removeAllCacheForKey:;
- (id)requestTaskForKey:;
- (id)requestCompletionListForKey:;
- (void)addCompletionBlock:forKey:;
- (void)setFetchingArray:;
- (void)setRequestTaskDic:;
- (void)setRequestCompletionListDic:;
- (id)init;
- (BOOL)containsKey:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
