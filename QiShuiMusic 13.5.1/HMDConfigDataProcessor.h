@interface HMDConfigDataProcessor : NSObject
@property (nonatomic) <HMDConfigDataProcessDelegate> delegate;
@property (nonatomic) <HMDConfigDataProcessDataSource> dataSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_mergeConfigDict:withAppID:appDict:;
- (void)processResponseData:;
- (void)setDataSource:;
- (void)setDelegate:;
- (id)dataSource;
- (id)delegate;
- (void).cxx_destruct;
+ (id)_mergeCacheDict:withMergeDict:;
+ (id)_mutableCopyDictionary:;
@end
