@interface PKTextInputStrokeProvider : PKStrokeProvider
@property (nonatomic) NSNumber strokeProviderVersion;
- (void).cxx_destruct;
- (id)initWithDrawing:;
- (id)strokeProviderVersion;
- (id)boundsForSliceIdentifiers:;
- (id)centroidForSlicesWithIdentifiers:;
- (id)startingPointForSlicesWithIdentifiers:;
- (BOOL)slicesWithIdentifiers:significantlyOverlapRect:;
- (BOOL)containsStrokeWithUUID:;
- (id)strokesForSliceIdentifiers:;
@end
