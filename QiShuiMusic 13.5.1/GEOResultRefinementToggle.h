@interface GEOResultRefinementToggle : NSObject
@property (nonatomic) NSString displayName;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) GEOPDResultRefinementMetadata metadata;
@property (nonatomic) Q toggleType;
@property (nonatomic) NSInteger evChargingConnectorType;
@property (nonatomic) NSNumber selectionSequenceNumber;
@property (nonatomic) BOOL selectionFromView;
@property (nonatomic) NSString refinementKey;
@property (nonatomic) BOOL showAsSelected;
- (id)metadata;
- (BOOL)isSelected;
- (void)setDisplayName:;
- (id)displayName;
- (void)setMetadata:;
- (void).cxx_destruct;
- (void)setIsSelected:;
- (id)refinementKey;
- (int)evChargingConnectorType;
- (id)selectionSequenceNumber;
- (id)initWithDisplayName:isSelected:metadata:toggleType:evChargingConnectorType:selectionSequenceNumber:selectionFromView:refinementKey:showAsSelected:;
- (id)initWithResultRefinementToggle:;
- (id)convertToGEOPDResultRefinementToggle;
- (unsigned long long)toggleType;
- (BOOL)selectionFromView;
- (BOOL)showAsSelected;
@end
