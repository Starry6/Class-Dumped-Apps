@interface PLPhotoLibraryBundleCriteriaTuple : NSObject
@property (nonatomic) PLPhotoLibraryBundle bundle;
@property (nonatomic) PLBackgroundJobCriteria criteria;
- (id)criteria;
- (unsigned long long)hash;
- (id)bundle;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithBundle:withCriteria:;
@end
