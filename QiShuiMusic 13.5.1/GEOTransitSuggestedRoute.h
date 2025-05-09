@interface GEOTransitSuggestedRoute : PBCodable
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL walkingOnlyRoute;
@property (nonatomic) BOOL hasAbsStartTime;
@property (nonatomic) I absStartTime;
@property (nonatomic) BOOL hasAbsEndTime;
@property (nonatomic) I absEndTime;
@property (nonatomic) NSMutableArray steps;
@property (nonatomic) BOOL hasRouteHandle;
@property (nonatomic) NSData routeHandle;
@property (nonatomic) BOOL hasRank;
@property (nonatomic) I rank;
@property (nonatomic) BOOL hasTransitIncidentMessage;
@property (nonatomic) GEOPBTransitRoutingIncidentMessage transitIncidentMessage;
@property (nonatomic) BOOL hasAdvisoriesInfo;
@property (nonatomic) GEOAdvisoriesInfo advisoriesInfo;
@property (nonatomic) NSMutableArray routePlanningArtworks;
@property (nonatomic) BOOL hasDisplayStrings;
@property (nonatomic) GEOTransitRouteDisplayStrings displayStrings;
@property (nonatomic) Q routeBadgesCount;
@property (nonatomic) ^i routeBadges;
@property (nonatomic) NSMutableArray sectionOptions;
@property (nonatomic) NSMutableArray sections;
@property (nonatomic) BOOL hasTravelTimeAggressiveEstimate;
@property (nonatomic) I travelTimeAggressiveEstimate;
@property (nonatomic) BOOL hasTravelTimeConservativeEstimate;
@property (nonatomic) I travelTimeConservativeEstimate;
@property (nonatomic) BOOL hasEngineDebugData;
@property (nonatomic) GEOTransitEngineDebugData engineDebugData;
@property (nonatomic) BOOL hasSupportsRouteUpdates;
@property (nonatomic) BOOL supportsRouteUpdates;
@property (nonatomic) PBUnknownFields unknownFields;
- (id)displayStrings;
- (id)sections;
- (id)steps;
- (void)readAll:;
- (void)setDisplayStrings:;
- (id)unknownFields;
- (BOOL)hasGreenTeaWithValue:;
- (id)init;
- (void)dealloc;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (BOOL)hasDisplayStrings;
- (id)sectionAtIndex:;
- (unsigned long long)hash;
- (unsigned int)rank;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)clearSections;
- (id)initWithData:;
- (unsigned long long)sectionsCount;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (void)setSections:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setSteps:;
- (void)setRank:;
- (BOOL)hasRank;
- (BOOL)isEqual:;
- (void)setHasRank:;
- (id)copyWithZone:;
- (void)clearSteps;
- (unsigned long long)stepsCount;
- (void)addSection:;
- (unsigned int)absStartTime;
- (void)setAbsStartTime:;
- (void)setHasAbsStartTime:;
- (BOOL)hasAbsStartTime;
- (unsigned int)absEndTime;
- (void)setAbsEndTime:;
- (void)setHasAbsEndTime:;
- (BOOL)hasAbsEndTime;
- (BOOL)hasAdvisoriesInfo;
- (id)advisoriesInfo;
- (void)setAdvisoriesInfo:;
- (void)addSteps:;
- (id)stepsAtIndex:;
- (BOOL)hasRouteHandle;
- (id)routeHandle;
- (void)setRouteHandle:;
- (BOOL)hasTransitIncidentMessage;
- (id)transitIncidentMessage;
- (void)setTransitIncidentMessage:;
- (id)routePlanningArtworks;
- (void)setRoutePlanningArtworks:;
- (void)clearRoutePlanningArtworks;
- (void)addRoutePlanningArtwork:;
- (unsigned long long)routePlanningArtworksCount;
- (id)routePlanningArtworkAtIndex:;
- (unsigned long long)routeBadgesCount;
- (id)routeBadges;
- (void)clearRouteBadges;
- (void)addRouteBadge:;
- (int)routeBadgeAtIndex:;
- (void)setRouteBadges:count:;
- (id)routeBadgesAsString:;
- (int)StringAsRouteBadges:;
- (id)sectionOptions;
- (void)setSectionOptions:;
- (void)clearSectionOptions;
- (void)addSectionOption:;
- (unsigned long long)sectionOptionsCount;
- (id)sectionOptionAtIndex:;
- (unsigned int)travelTimeAggressiveEstimate;
- (void)setTravelTimeAggressiveEstimate:;
- (void)setHasTravelTimeAggressiveEstimate:;
- (BOOL)hasTravelTimeAggressiveEstimate;
- (unsigned int)travelTimeConservativeEstimate;
- (void)setTravelTimeConservativeEstimate:;
- (void)setHasTravelTimeConservativeEstimate:;
- (BOOL)hasTravelTimeConservativeEstimate;
- (BOOL)hasEngineDebugData;
- (id)engineDebugData;
- (void)setEngineDebugData:;
- (BOOL)supportsRouteUpdates;
- (void)setSupportsRouteUpdates:;
- (void)setHasSupportsRouteUpdates:;
- (BOOL)hasSupportsRouteUpdates;
- (id)instanceCompatibleWithProtocolVersion:;
- (BOOL)isWalkingOnlyRoute;
- (id)nextOptionForOption:withRideIndex:;
+ (BOOL)isValid:;
+ (Class)sectionType;
+ (Class)stepsType;
+ (Class)routePlanningArtworkType;
+ (Class)sectionOptionType;
@end
