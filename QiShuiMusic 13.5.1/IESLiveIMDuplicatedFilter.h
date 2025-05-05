@interface IESLiveIMDuplicatedFilter : NSObject
@property (nonatomic) NSMutableArray receivedDataKeys;
@property (nonatomic) NSMutableDictionary receivedDataDic;
@property (nonatomic) NSInteger maxCacheSize;
@property (nonatomic) <IESLiveIMFilter> nextFilter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)receivedDataDic;
- (BOOL)doFilter:;
- (id)nextFilter;
- (id)receivedDataKeys;
- (void)setNextFilter:;
- (void)setReceivedDataDic:;
- (void)setReceivedDataKeys:;
- (BOOL)shouldFilter:withKey:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (int)maxCacheSize;
- (void)setMaxCacheSize:;
@end
