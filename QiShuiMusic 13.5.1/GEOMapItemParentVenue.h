@interface GEOMapItemParentVenue : NSObject
@property (nonatomic) Q businessID;
@property (nonatomic) NSInteger featureType;
- (int)featureType;
- (id)init;
- (unsigned long long)businessID;
- (id)initWithBusinessID:featureType:;
- (id)initWithLocatedInsideInfo:;
@end
