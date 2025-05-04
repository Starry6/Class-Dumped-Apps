@interface AWEScreenCastContentBaseService : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) BOOL requesting;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateParams;
- (void)requestWithParams:pullType:completion:;
- (BOOL)requesting;
- (void)setRequesting:;
- (id)init;
- (void)setHasMore:;
- (id)path;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)setPath:;
@end
