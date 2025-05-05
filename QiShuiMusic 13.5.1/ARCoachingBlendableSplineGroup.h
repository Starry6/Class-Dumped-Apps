@interface ARCoachingBlendableSplineGroup : NSObject
@property (nonatomic) NSArray controlPoints;
@property (nonatomic) ^{?=} patchData;
@property (nonatomic) I patchDataLength;
@property (nonatomic) ^S indices;
@property (nonatomic) I numIndices;
- (id)indices;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)patchData;
- (id)controlPoints;
- (unsigned int)patchDataLength;
- (unsigned int)numIndices;
- (id)initWithSplineGroups:;
@end
