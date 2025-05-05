@interface GEORouteBuilder : NSObject
+ (id)outputForGeoWaypointRoute:initializerData:custodian:;
+ (id)_coordinatesForGeoWaypointRoute:;
+ (id)_unpackedPointsDataForGeoRoute:;
+ (void)_componentsForGeoWaypointRoute:initializerData:coordinates:custodian:outLegs:outSegments:outSteps:;
+ (id)_composedRouteStepWithTransportType:andCustodian:geoRouteLeg:forGeoStep:withStepIndex:startRouteCoordinate:endRouteCoordinate:maneuverStartRouteCoordinate:;
+ (id)_composedRouteStepWithTransportType:andCustodian:geoRouteLeg:forGeoStep:withStepIndex:stepStartPointIndex:legStartPointIndex:;
+ (id)_composedRouteSegmentForStartStep:andEndStep:andCustodian:;
+ (id)_composedRouteLegForStartStep:endStep:custodian:geoRouteLeg:legIndex:origin:destination:arrivalParameters:legLength:;
+ (id)buildPointSectionsWithSteps:segments:coordinates:;
+ (id)segmentForPointIndex:withSegments:andSteps:;
+ (unsigned long long)stepIndexForPointIndex:withSteps:;
+ (id)_segmentForStepIndex:withSegments:;
+ (unsigned long long)segmentIndexForPointIndex:withSegments:;
+ (id)buildMapRegionFromPointSections:;
+ (id)_guidanceEventsForGeoWaypointRoute:legs:steps:coordinates:;
+ (BOOL)_isGuidanceEventAtEndOfLeg:;
+ (id)_visualInfosForGuidanceEvents:steps:coordinates:;
+ (id)_cellularCoverageForGeoWaypointRoute:coordinates:;
@end
