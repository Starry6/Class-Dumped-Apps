@interface GEOComposedTransitStationRouteSegment : GEOComposedTransitBaseRouteSegment
- (BOOL)isTransfer;
- (id)initWithComposedRoute:decoderData:stepRange:transitStepRange:pointRange:;
- (BOOL)hasEnterStationManeuver;
- (BOOL)hasExitStationManeuver;
@end
