@interface FPXObserver : NSObject
@property (nonatomic) BOOL invalidated;
- (id)init;
- (BOOL)isInvalidated;
- (void).cxx_destruct;
- (id)initWithObservedItemID:domainContext:nsFileProviderRequest:;
- (void)invalidate;
- (void)_fixupFavoriteRank:;
- (id)updateForProviderItem:;
- (void)verifyVendorToken:;
@end
