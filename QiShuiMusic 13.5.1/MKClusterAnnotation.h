@interface MKClusterAnnotation : NSObject
@property (nonatomic) NSString clusteringIdentifier;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSArray memberAnnotations;
@property (nonatomic) {CLLocationCoordinate2D=dd} coordinate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSubtitle:;
- (void)setTitle:;
- (unsigned long long)hash;
- (id)title;
- (void).cxx_destruct;
- (id)coordinate;
- (id)subtitle;
- (BOOL)isEqual:;
- (void)setClusteringIdentifier:;
- (id)clusteringIdentifier;
- (BOOL)_isMKClusterAnnotation;
- (id)initWithMemberAnnotations:;
- (void)_memberAnnotationCoordinateDidChange;
- (id)_averageCoordinate;
- (id)memberAnnotations;
@end
