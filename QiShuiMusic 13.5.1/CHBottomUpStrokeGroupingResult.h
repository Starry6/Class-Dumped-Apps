@interface CHBottomUpStrokeGroupingResult : CHStrokeGroupingResult
@property (nonatomic) NSDictionary substrokePlacementsByStrokeIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithStrokeGroups:createdStrokeGroups:deletedStrokeGroups:substrokePlacementsByStrokeIdentifier:;
- (id)substrokePlacementsByStrokeIdentifier;
+ (BOOL)supportsSecureCoding;
@end
