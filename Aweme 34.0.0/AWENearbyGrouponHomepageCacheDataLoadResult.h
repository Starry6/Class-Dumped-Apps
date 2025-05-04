@interface AWENearbyGrouponHomepageCacheDataLoadResult : NSObject
@property (nonatomic) BOOL isLoadCompleted;
@property (nonatomic) NSString loadErrorMsg;
@property (nonatomic) AWENearbyGrouponListDataLocalCache cacheDataModel;
- (void)setIsLoadCompleted:;
- (void)setLoadErrorMsg:;
- (void)completeDataLoadWithErrorMessage:;
- (BOOL)isLoadCompleted;
- (id)loadErrorMsg;
- (id)cacheDataModel;
- (void)setCacheDataModel:;
- (void).cxx_destruct;
@end
