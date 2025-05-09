@interface GEOComposedGuidanceEvent : NSObject
@property (nonatomic) NSUUID uniqueID;
@property (nonatomic) Q stepIndex;
@property (nonatomic) Q legIndex;
@property (nonatomic) BOOL hasSignGuidance;
@property (nonatomic) BOOL hasSpokenGuidance;
@property (nonatomic) BOOL hasJunctionView;
@property (nonatomic) BOOL hasArGuidance;
@property (nonatomic) Q stackRanking;
@property (nonatomic) NSArray signTitles;
@property (nonatomic) NSArray signDetails;
@property (nonatomic) GEONameInfo shieldInfo;
@property (nonatomic) NSInteger maneuverType;
@property (nonatomic) NSInteger drivingSide;
@property (nonatomic) GEOJunction maneuverJunction;
@property (nonatomic) GEOJunctionView junctionView;
@property (nonatomic) <GEOTransitArtworkDataSource> artworkOverride;
@property (nonatomic) NSString exclusiveSetIdentifier;
@property (nonatomic) NSArray announcements;
@property (nonatomic) double repetitionInterval;
@property (nonatomic) BOOL hasHaptics;
@property (nonatomic) BOOL isSticky;
@property (nonatomic) BOOL isImportant;
@property (nonatomic) BOOL isSpecial;
@property (nonatomic) NSArray lanes;
@property (nonatomic) NSArray laneTitles;
@property (nonatomic) NSArray laneInstructions;
@property (nonatomic) NSInteger composedGuidanceEventType;
@property (nonatomic) BOOL isLaneGuidanceForManeuver;
@property (nonatomic) Q numChainedAnnouncements;
@property (nonatomic) <GEOServerFormattedString> arInstruction;
@property (nonatomic) NSString arArrowLabel;
@property (nonatomic) NSInteger arType;
@property (nonatomic) NSArray gapRanges;
@property (nonatomic) NSData serverRouteID;
@property (nonatomic) I stepID;
@property (nonatomic) NSInteger transportType;
@property (nonatomic) NSString roadName;
@property (nonatomic) double distance;
@property (nonatomic) {?=If} startValidRouteCoordinate;
@property (nonatomic) {?=If} endValidRouteCoordinate;
@property (nonatomic) {?=If} coordinateForDistanceStrings;
@property (nonatomic) double startValidDistance;
@property (nonatomic) double endValidDistance;
@property (nonatomic) double distanceForStrings;
@property (nonatomic) Q source;
@property (nonatomic) Q sourceIndex;
@property (nonatomic) Q enrouteNoticeIndex;
- (double)distance;
- (id)uniqueID;
- (int)transportType;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)compare:;
- (void).cxx_destruct;
- (unsigned long long)source;
- (id)description;
- (id)roadName;
- (unsigned long long)stepIndex;
- (void)setSource:;
- (BOOL)isEqual:;
- (long long)comparePriority:;
- (unsigned long long)sourceIndex;
- (int)maneuverType;
- (id)serverRouteID;
- (int)drivingSide;
- (id)artworkOverride;
- (unsigned int)stepID;
- (id)announcements;
- (id)gapRanges;
- (double)startValidDistance;
- (double)endValidDistance;
- (BOOL)hasSignGuidance;
- (BOOL)hasSpokenGuidance;
- (BOOL)hasArGuidance;
- (BOOL)hasJunctionView;
- (id)junctionView;
- (unsigned long long)enrouteNoticeIndex;
- (void)setEnrouteNoticeIndex:;
- (id)signTitles;
- (id)signDetails;
- (unsigned long long)stackRanking;
- (double)repetitionInterval;
- (id)exclusiveSetIdentifier;
- (id)initWithGeoGuidanceEvent:step:legIndex:coordinates:;
- (unsigned long long)_junctionViewIDForData:;
- (id)shieldInfo;
- (BOOL)hasHaptics;
- (BOOL)isSticky;
- (BOOL)isImportant;
- (BOOL)isSpecial;
- (id)lanes;
- (id)laneTitles;
- (id)laneInstructions;
- (int)composedGuidanceEventType;
- (BOOL)isLaneGuidanceForManeuver;
- (unsigned long long)numChainedAnnouncements;
- (id)arInstruction;
- (id)arArrowLabel;
- (int)arType;
- (BOOL)isValidForSpeed:;
- (double)startDistanceForSpeed:;
- (double)endDistanceForSpeed:;
- (double)triggerDistanceForSpeed:andDuration:;
- (double)desiredTimeGapToEvent:chained:;
- (long long)compareFactoringInSpeed:speed:;
- (unsigned long long)legIndex;
- (id)maneuverJunction;
- (id)startValidRouteCoordinate;
- (id)endValidRouteCoordinate;
- (id)coordinateForDistanceStrings;
- (double)distanceForStrings;
- (void)setSourceIndex:;
+ (BOOL)supportsSecureCoding;
@end
