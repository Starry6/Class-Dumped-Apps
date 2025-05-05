@interface AltTileFetcher : NSObject
- (void)cancelJob:;
- (id)initWithToken:;
- (void).cxx_destruct;
- (void)reportCorruptTile:;
- (id).cxx_construct;
- (id)getJobForKey:;
- (void)fetchDataForJob:;
- (void)updateJobPriority:;
- (void)cancelRequests;
- (void)purgeExpired:;
@end
