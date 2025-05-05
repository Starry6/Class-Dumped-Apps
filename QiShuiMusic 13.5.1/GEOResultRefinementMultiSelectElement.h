@interface GEOResultRefinementMultiSelectElement : NSObject
@property (nonatomic) NSString displayName;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) GEOPDResultRefinementMetadata metadata;
@property (nonatomic) NSString refinementKey;
@property (nonatomic) Q elementType;
@property (nonatomic) NSInteger evChargingConnectorType;
@property (nonatomic) NSNumber selectionSequenceNumber;
- (id)metadata;
- (BOOL)isSelected;
- (void)setDisplayName:;
- (id)displayName;
- (void)setMetadata:;
- (unsigned long long)elementType;
- (void).cxx_destruct;
- (void)setIsSelected:;
- (id)initWithDisplayName:isSelected:metadata:elementType:evChargingConnectorType:selectionSequenceNumber:;
- (id)refinementKey;
- (id)initWithResultRefinementMultiSelectElement:;
- (id)convertToGEOPDResultRefinementMultiSelectElement;
- (int)evChargingConnectorType;
- (id)selectionSequenceNumber;
@end
