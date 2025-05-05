@interface MKLocalSearchResponse : NSObject
@property (nonatomic) NSArray mapItems;
@property (nonatomic) {?={CLLocationCoordinate2D=dd}{?=dd}} boundingRegion;
- (id)_dictionaryRepresentation;
- (void).cxx_destruct;
- (id)description;
- (id)mapItems;
- (id)boundingRegion;
- (id)_initWithMapItems:boundingRegion:;
@end
