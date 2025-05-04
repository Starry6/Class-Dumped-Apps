@interface AWELVPaymentManager : NSObject
@property (nonatomic) NSMutableArray hasPaidAlbumIDArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updatePaidAlbumCache:;
- (id)hasPaidAlbumIDArray;
- (BOOL)shouldRefreshAwemePaidInfo:;
- (void)setHasPaidAlbumIDArray:;
- (void).cxx_destruct;
+ (id)defaultManager;
@end
