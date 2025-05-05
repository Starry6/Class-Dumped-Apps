@interface UISMutableDisplayContext : UISDisplayContext
@property (nonatomic) FBSDisplayConfiguration displayConfiguration;
@property (nonatomic) UISApplicationSupportDisplayEdgeInfo displayEdgeInfo;
@property (nonatomic) Q artworkSubtype;
@property (nonatomic) Q userInterfaceStyle;
@property (nonatomic) UISDisplayShape exclusionArea;
- (void)setUserInterfaceStyle:;
- (void)setDisplayConfiguration:;
- (id)copyWithZone:;
- (void)setArtworkSubtype:;
- (void)setDisplayEdgeInfo:;
- (void)setExclusionArea:;
@end
