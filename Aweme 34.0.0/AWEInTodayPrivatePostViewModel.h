@interface AWEInTodayPrivatePostViewModel : NSObject
@property (nonatomic) NSMutableArray memoriesList;
@property (nonatomic) Q coverType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)coverType;
- (void)setCoverType:;
- (id)memoriesList;
- (void)fetchPrivatePostMemoriesListWithCompletion:;
- (void)getAggregatedPhotoLibrary:;
- (void)setMemoriesList:;
- (void)fetchPrivatePostMemoryModelWithCompletion:;
- (void)checkAlbumValid:completion:;
- (void)processQueryResultWithResp:coverUri:networkError:ompletion:;
- (void)hasAggregatedPhotoLibrary:;
- (void)fetchMemoryModelCachedWithCompletion:;
- (void).cxx_destruct;
@end
