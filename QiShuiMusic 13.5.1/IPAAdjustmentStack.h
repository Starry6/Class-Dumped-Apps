@interface IPAAdjustmentStack : NSObject
@property (nonatomic) IPAAdjustmentVersionInfo versionInfo;
@property (nonatomic) NSArray adjustments;
- (id)versionInfo;
- (id)init;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)adjustments;
- (void)setAdjustments:;
- (id)minimumVersionForFormat:;
- (id)_debugDescriptionSuffix;
- (BOOL)isEqualToAdjustmentStack:;
- (void)setVersionInfo:;
@end
