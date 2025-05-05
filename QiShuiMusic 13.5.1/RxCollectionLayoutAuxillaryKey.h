@interface RxCollectionLayoutAuxillaryKey : NSObject
@property (nonatomic) BOOL isSupplementary;
@property (nonatomic) q auxillaryKind;
@property (nonatomic) q index;
@property (nonatomic) NSString elementKind;
- (long long)auxillaryKind;
- (id)elementKind;
- (unsigned long long)hash;
- (long long)index;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithElementKind:index:auxillaryKind:isSupplementary:;
- (BOOL)isSupplementary;
@end
