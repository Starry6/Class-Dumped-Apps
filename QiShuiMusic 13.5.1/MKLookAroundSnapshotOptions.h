@interface MKLookAroundSnapshotOptions : NSObject
@property (nonatomic) MKMapSnapshotOptions options;
@property (nonatomic) MKPointOfInterestFilter pointOfInterestFilter;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) UITraitCollection traitCollection;
- (void)setTraitCollection:;
- (void)_setOptions:;
- (id)init;
- (id)pointOfInterestFilter;
- (id)_options;
- (id)traitCollection;
- (void)setPointOfInterestFilter:;
- (void).cxx_destruct;
- (void)setSize:;
- (id)size;
@end
