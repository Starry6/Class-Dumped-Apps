@interface PLFrequentLocation : NSObject
@property (nonatomic) NSMutableArray sortedMoments;
@property (nonatomic) {CLLocationCoordinate2D=dd} coordinate;
@property (nonatomic) NSDateInterval dateInterval;
@property (nonatomic) NSSet momentsSet;
@property (nonatomic) <PLMomentProcessingProtocol> centroid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dateInterval;
- (void)setDateInterval:;
- (id)centroid;
- (void)setCentroid:;
- (void).cxx_destruct;
- (id)coordinate;
- (id)description;
- (void)setCoordinate:;
- (BOOL)isEqual:;
- (id)sortedMoments;
- (id)initWithSortedMoments:;
- (BOOL)isSimilarToFrequentLocation:;
- (BOOL)isWithinDistance:toCoordinate:;
- (void)addMomentToSortedMoment:;
- (void)_invalidateLazyProperties;
- (id)momentsSet;
- (void)setSortedMoments:;
- (void)setMomentsSet:;
@end
