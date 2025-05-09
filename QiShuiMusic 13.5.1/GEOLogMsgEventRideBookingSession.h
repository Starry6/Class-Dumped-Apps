@interface GEOLogMsgEventRideBookingSession : PBCodable
@property (nonatomic) BOOL hasRideBookingSessionId;
@property (nonatomic) NSString rideBookingSessionId;
@property (nonatomic) BOOL hasEndState;
@property (nonatomic) NSInteger endState;
@property (nonatomic) BOOL hasEndView;
@property (nonatomic) NSInteger endView;
@property (nonatomic) BOOL hasRideAppId;
@property (nonatomic) NSString rideAppId;
@property (nonatomic) BOOL hasOriginBlurred;
@property (nonatomic) GEOLatLng originBlurred;
@property (nonatomic) BOOL hasDestinationBlurred;
@property (nonatomic) GEOLatLng destinationBlurred;
@property (nonatomic) BOOL hasExploredOtherOptions;
@property (nonatomic) BOOL exploredOtherOptions;
@property (nonatomic) BOOL hasRideType;
@property (nonatomic) NSString rideType;
@property (nonatomic) BOOL hasDistanceToPickupInMeters;
@property (nonatomic) double distanceToPickupInMeters;
@property (nonatomic) BOOL hasPaymentIsApplePay;
@property (nonatomic) BOOL paymentIsApplePay;
@property (nonatomic) BOOL hasNumberOfAvailableExtensions;
@property (nonatomic) I numberOfAvailableExtensions;
@property (nonatomic) BOOL hasSwitchedApp;
@property (nonatomic) BOOL switchedApp;
@property (nonatomic) BOOL hasShowedSurgePricingAlert;
@property (nonatomic) BOOL showedSurgePricingAlert;
@property (nonatomic) BOOL hasDurationOfSessionInSeconds;
@property (nonatomic) double durationOfSessionInSeconds;
@property (nonatomic) BOOL hasInstalledApp;
@property (nonatomic) BOOL installedApp;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) q timestamp;
@property (nonatomic) BOOL hasUnavailable;
@property (nonatomic) BOOL unavailable;
@property (nonatomic) BOOL hasMovedPickupLocation;
@property (nonatomic) BOOL movedPickupLocation;
@property (nonatomic) NSMutableArray errorMessages;
@property (nonatomic) BOOL hasRideAppVersion;
@property (nonatomic) NSString rideAppVersion;
@property (nonatomic) BOOL hasComparedRideOptions;
@property (nonatomic) BOOL comparedRideOptions;
@property (nonatomic) BOOL hasStatusIssue;
@property (nonatomic) NSInteger statusIssue;
@property (nonatomic) NSMutableArray intentResponseFailures;
- (void)readAll:;
- (BOOL)hasGreenTeaWithValue:;
- (id)init;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setUnavailable:;
- (void)setTimestamp:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)endState;
- (void)setEndState:;
- (void)setHasEndState:;
- (BOOL)hasEndState;
- (id)endStateAsString:;
- (int)StringAsEndState:;
- (int)endView;
- (void)setEndView:;
- (void)setHasEndView:;
- (BOOL)hasEndView;
- (id)endViewAsString:;
- (int)StringAsEndView:;
- (double)durationOfSessionInSeconds;
- (void)setDurationOfSessionInSeconds:;
- (void)setHasDurationOfSessionInSeconds:;
- (BOOL)hasDurationOfSessionInSeconds;
- (id)errorMessages;
- (void)setErrorMessages:;
- (void)clearErrorMessages;
- (void)addErrorMessage:;
- (unsigned long long)errorMessagesCount;
- (id)errorMessageAtIndex:;
- (BOOL)hasRideAppId;
- (id)rideAppId;
- (void)setRideAppId:;
- (BOOL)hasRideAppVersion;
- (id)rideAppVersion;
- (void)setRideAppVersion:;
- (int)statusIssue;
- (void)setStatusIssue:;
- (void)setHasStatusIssue:;
- (BOOL)hasStatusIssue;
- (id)statusIssueAsString:;
- (int)StringAsStatusIssue:;
- (id)intentResponseFailures;
- (void)setIntentResponseFailures:;
- (void)clearIntentResponseFailures;
- (void)addIntentResponseFailure:;
- (unsigned long long)intentResponseFailuresCount;
- (id)intentResponseFailureAtIndex:;
- (BOOL)hasRideBookingSessionId;
- (id)rideBookingSessionId;
- (void)setRideBookingSessionId:;
- (BOOL)hasOriginBlurred;
- (id)originBlurred;
- (void)setOriginBlurred:;
- (BOOL)hasDestinationBlurred;
- (id)destinationBlurred;
- (void)setDestinationBlurred:;
- (BOOL)exploredOtherOptions;
- (void)setExploredOtherOptions:;
- (void)setHasExploredOtherOptions:;
- (BOOL)hasExploredOtherOptions;
- (BOOL)hasRideType;
- (id)rideType;
- (void)setRideType:;
- (double)distanceToPickupInMeters;
- (void)setDistanceToPickupInMeters:;
- (void)setHasDistanceToPickupInMeters:;
- (BOOL)hasDistanceToPickupInMeters;
- (BOOL)paymentIsApplePay;
- (void)setPaymentIsApplePay:;
- (void)setHasPaymentIsApplePay:;
- (BOOL)hasPaymentIsApplePay;
- (unsigned int)numberOfAvailableExtensions;
- (void)setNumberOfAvailableExtensions:;
- (void)setHasNumberOfAvailableExtensions:;
- (BOOL)hasNumberOfAvailableExtensions;
- (BOOL)switchedApp;
- (void)setSwitchedApp:;
- (void)setHasSwitchedApp:;
- (BOOL)hasSwitchedApp;
- (BOOL)showedSurgePricingAlert;
- (void)setShowedSurgePricingAlert:;
- (void)setHasShowedSurgePricingAlert:;
- (BOOL)hasShowedSurgePricingAlert;
- (BOOL)installedApp;
- (void)setInstalledApp:;
- (void)setHasInstalledApp:;
- (BOOL)hasInstalledApp;
- (BOOL)unavailable;
- (void)setHasUnavailable:;
- (BOOL)hasUnavailable;
- (BOOL)movedPickupLocation;
- (void)setMovedPickupLocation:;
- (void)setHasMovedPickupLocation:;
- (BOOL)hasMovedPickupLocation;
- (BOOL)comparedRideOptions;
- (void)setComparedRideOptions:;
- (void)setHasComparedRideOptions:;
- (BOOL)hasComparedRideOptions;
+ (BOOL)isValid:;
+ (Class)errorMessageType;
+ (Class)intentResponseFailureType;
@end
