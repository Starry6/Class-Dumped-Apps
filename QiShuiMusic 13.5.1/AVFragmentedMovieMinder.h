@interface AVFragmentedMovieMinder : AVFragmentedAssetMinder
@property (nonatomic) double mindingInterval;
@property (nonatomic) NSArray movies;
- (double)mindingInterval;
- (BOOL)_throwsWhenAlreadyMindedAssetIsAdded;
- (void)setMindingInterval:;
- (id)initWithMovie:mindingInterval:;
- (id)movies;
- (void)addFragmentedMovie:;
- (void)removeFragmentedMovie:;
+ (id)fragmentedMovieMinderWithMovie:mindingInterval:;
@end
