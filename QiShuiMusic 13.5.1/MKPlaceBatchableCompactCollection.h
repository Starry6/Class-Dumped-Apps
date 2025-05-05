@interface MKPlaceBatchableCompactCollection : NSObject
@property (nonatomic) MKMapItemIdentifier guideLocationIdentifier;
@property (nonatomic) MKPlaceCompactCollectionViewModel viewModel;
- (id)viewModel;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:;
- (void)setViewModel:;
- (BOOL)isEqual:;
- (id)guideLocationIdentifier;
- (id)initWithWorldwideViewModel:;
@end
