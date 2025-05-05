@interface PKInputPointAltitudeAndAzimuthNoiseFilter : PKInputPointBaseFilter
- (void)resetFilter;
- (id).cxx_construct;
- (void)addInputPoint:;
- (void)_recalculateOffsets;
@end
