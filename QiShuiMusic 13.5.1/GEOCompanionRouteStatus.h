@interface GEOCompanionRouteStatus : PBCodable
@property (nonatomic) BOOL isNavigating;
@property (nonatomic) BOOL isRecalculating;
@property (nonatomic) BOOL hasEffectiveStepID;
@property (nonatomic) I effectiveStepID;
@property (nonatomic) BOOL hasEffectiveDistanceToManeuver;
@property (nonatomic) I effectiveDistanceToManeuver;
@property (nonatomic) NSArray selectedRideIndices;
@property (nonatomic) BOOL hasFeedbackType;
@property (nonatomic) NSInteger feedbackType;
@property (nonatomic) BOOL hasStepID;
@property (nonatomic) I stepID;
@property (nonatomic) BOOL hasDistanceToManeuver;
@property (nonatomic) I distanceToManeuver;
@property (nonatomic) BOOL hasDistanceToRoute;
@property (nonatomic) I distanceToRoute;
@property (nonatomic) BOOL hasDistanceRemainingOnRoute;
@property (nonatomic) I distanceRemainingOnRoute;
@property (nonatomic) BOOL hasRemainingTime;
@property (nonatomic) I remainingTime;
@property (nonatomic) BOOL hasLocation;
@property (nonatomic) GEOLocation location;
@property (nonatomic) BOOL hasRouteLocationIndex;
@property (nonatomic) I routeLocationIndex;
@property (nonatomic) BOOL hasRouteLocationOffset;
@property (nonatomic) float routeLocationOffset;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasRouteMatchCoordinate;
@property (nonatomic) GEOLatLng routeMatchCoordinate;
@property (nonatomic) BOOL hasRouteID;
@property (nonatomic) NSData routeID;
@property (nonatomic) BOOL hasGuidancePromptsEnabled;
@property (nonatomic) BOOL guidancePromptsEnabled;
@property (nonatomic) Q selectedRideIndexsCount;
@property (nonatomic) ^I selectedRideIndexs;
@property (nonatomic) BOOL hasLowGuidanceNavigation;
@property (nonatomic) BOOL lowGuidanceNavigation;
@property (nonatomic) BOOL hasHapticsType;
@property (nonatomic) NSInteger hapticsType;
@property (nonatomic) BOOL hasIsConnectedToCarplay;
@property (nonatomic) BOOL isConnectedToCarplay;
@property (nonatomic) BOOL hasAlightMessage;
@property (nonatomic) GEOCompanionTransitAlightMessage alightMessage;
- (int)feedbackType;
- (void)setFeedbackType:;
- (void)setGuidancePromptsEnabled:;
- (void)setIsConnectedToCarplay:;
- (void)readAll:;
- (id)routeID;
- (BOOL)hasGreenTeaWithValue:;
- (id)init;
- (void)clearSensitiveFields:;
- (void)dealloc;
- (id)initWithJSON:;
- (BOOL)hasLocation;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setHasFeedbackType:;
- (unsigned int)remainingTime;
- (unsigned long long)hash;
- (BOOL)guidancePromptsEnabled;
- (void)copyTo:;
- (id)location;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (id)initWithData:;
- (void)setLocation:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (double)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasFeedbackType;
- (BOOL)isEqual:;
- (void)setRemainingTime:;
- (id)copyWithZone:;
- (id)feedbackTypeAsString:;
- (int)StringAsFeedbackType:;
- (BOOL)hasRouteID;
- (void)setRouteID:;
- (unsigned int)stepID;
- (void)setStepID:;
- (void)setHasStepID:;
- (BOOL)hasStepID;
- (unsigned int)distanceToManeuver;
- (void)setDistanceToManeuver:;
- (void)setHasDistanceToManeuver:;
- (BOOL)hasDistanceToManeuver;
- (unsigned int)distanceToRoute;
- (void)setDistanceToRoute:;
- (void)setHasDistanceToRoute:;
- (BOOL)hasDistanceToRoute;
- (unsigned int)distanceRemainingOnRoute;
- (void)setDistanceRemainingOnRoute:;
- (void)setHasDistanceRemainingOnRoute:;
- (BOOL)hasDistanceRemainingOnRoute;
- (void)setHasRemainingTime:;
- (BOOL)hasRemainingTime;
- (unsigned int)routeLocationIndex;
- (void)setRouteLocationIndex:;
- (void)setHasRouteLocationIndex:;
- (BOOL)hasRouteLocationIndex;
- (float)routeLocationOffset;
- (void)setRouteLocationOffset:;
- (void)setHasRouteLocationOffset:;
- (BOOL)hasRouteLocationOffset;
- (BOOL)hasRouteMatchCoordinate;
- (id)routeMatchCoordinate;
- (void)setRouteMatchCoordinate:;
- (void)setHasGuidancePromptsEnabled:;
- (BOOL)hasGuidancePromptsEnabled;
- (unsigned long long)selectedRideIndexsCount;
- (id)selectedRideIndexs;
- (void)clearSelectedRideIndexs;
- (void)addSelectedRideIndex:;
- (unsigned int)selectedRideIndexAtIndex:;
- (void)setSelectedRideIndexs:count:;
- (BOOL)lowGuidanceNavigation;
- (void)setLowGuidanceNavigation:;
- (void)setHasLowGuidanceNavigation:;
- (BOOL)hasLowGuidanceNavigation;
- (int)hapticsType;
- (void)setHapticsType:;
- (void)setHasHapticsType:;
- (BOOL)hasHapticsType;
- (id)hapticsTypeAsString:;
- (int)StringAsHapticsType:;
- (BOOL)isConnectedToCarplay;
- (void)setHasIsConnectedToCarplay:;
- (BOOL)hasIsConnectedToCarplay;
- (BOOL)hasAlightMessage;
- (id)alightMessage;
- (void)setAlightMessage:;
- (id)initWithRouteID:;
- (id)initWithRoute:routeID:;
- (void)updateWithRoute:routeID:;
- (void)updateClusteredSectionSelectedRideIndicesFromRoute:routeID:;
- (void)_updateClusteredSectionSelectedRideIndicesFromRoute:;
- (void)updateFeedbackWithNavigationState:locationUnreliable:announcementStage:nextAnnouncementStage:nextAnnouncementTime:;
- (BOOL)hasArrivedAtIntermediateWaypointInRoute:;
- (BOOL)isNavigating;
- (BOOL)isRecalculating;
- (BOOL)hasEffectiveStepID;
- (unsigned int)effectiveStepID;
- (unsigned int)effectiveStepIDInRoute:;
- (BOOL)hasEffectiveDistanceToManeuver;
- (unsigned int)effectiveDistanceToManeuver;
- (id)selectedRideIndices;
+ (BOOL)isValid:;
@end
