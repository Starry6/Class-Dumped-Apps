@interface CPSpacerFinder : NSObject
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (id)spacers;
- (id)initWithContentZone:;
- (void)splitTextLines;
- (void)initializeSegmentations;
- (void)initializeJunctions;
- (void)findSpacers;
- (void)assessQuality;
- (void)determineValidity;
@end
