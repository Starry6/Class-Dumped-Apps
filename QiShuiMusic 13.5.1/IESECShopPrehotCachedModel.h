@interface IESECShopPrehotCachedModel : NSObject
@property (nonatomic) double timeStamp;
@property (nonatomic) IESECStoreContainerViewModel viewModel;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL hasHitCache;
@property (nonatomic) BOOL hasReinitValidDur;
- (void)setHasHitCache:;
- (BOOL)hasHitCache;
- (BOOL)hasReinitValidDur;
- (void)setHasReinitValidDur:;
- (id)viewModel;
- (BOOL)isValid;
- (void).cxx_destruct;
- (double)timeStamp;
- (void)setViewModel:;
- (void)setTimeStamp:;
@end
