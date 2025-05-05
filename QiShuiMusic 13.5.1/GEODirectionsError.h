@interface GEODirectionsError : NSObject
@property (nonatomic) NSString localizedTitle;
@property (nonatomic) NSString localizedDescription;
@property (nonatomic) NSArray internalServerErrors;
@property (nonatomic) <GEOTransitRoutingIncidentMessage> incidentMessage;
@property (nonatomic) q firstDirectionsErrorCode;
- (void)dealloc;
- (id)localizedDescription;
- (id)initWithCoder:;
- (id)initWithResponse:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)localizedTitle;
- (id)description;
- (void)_copyProblemDetails:count:;
- (id)initWithWaypointIndex:;
- (id)incidentMessage;
- (long long)firstDirectionsErrorCode;
- (long long)_errorCodeForProblemDetail:;
- (BOOL)_errorCode:toProblem:;
- (BOOL)hasError:;
- (id)internalServerErrors;
+ (BOOL)supportsSecureCoding;
@end
