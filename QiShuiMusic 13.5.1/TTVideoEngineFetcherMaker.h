@interface TTVideoEngineFetcherMaker : NSObject
@property (nonatomic) NSPointerArray fetcherDelegateList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fetcherDelegateList;
- (id)getFetcher:fileKey:oldURL:engineId:;
- (id)getMDLFetcherDelegate:;
- (void)setFetcherDelegateList:;
- (void)storeDelegate:;
- (id)init;
- (void)dealloc;
- (void)removeDelegate:;
- (void).cxx_destruct;
+ (id)instance;
@end
