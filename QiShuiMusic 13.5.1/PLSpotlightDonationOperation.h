@interface PLSpotlightDonationOperation : PLSpotlightAsyncOperation
@property (nonatomic) CSSearchableIndex searchableIndex;
@property (nonatomic) NSArray searchableItems;
@property (nonatomic) PLPhotoLibrary photoLibrary;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) <PLSpotlightDonationManagerSignpostDelegate> signpostDelegate;
- (id)photoLibrary;
- (id)bundleIdentifier;
- (void)setSignpostDelegate:;
- (id)searchableItems;
- (id)initWithPhotoLibrary:spotlightSearchableIndex:searchableItems:bundleIdentifier:;
- (id)signpostDelegate;
- (void)main;
- (void).cxx_destruct;
- (id)searchableIndex;
@end
