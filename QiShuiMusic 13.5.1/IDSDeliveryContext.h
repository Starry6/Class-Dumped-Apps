@interface IDSDeliveryContext : NSObject
@property (nonatomic) NSNumber responseCommand;
@property (nonatomic) NSNumber responseTimeStamp;
@property (nonatomic) q responseCode;
@property (nonatomic) NSError responseError;
@property (nonatomic) NSData responseToken;
@property (nonatomic) NSError deliveryError;
@property (nonatomic) NSNumber failureReason;
@property (nonatomic) NSArray displayIDs;
@property (nonatomic) q idsResponseCode;
@property (nonatomic) BOOL lastCall;
@property (nonatomic) BOOL lastCourierAck;
@property (nonatomic) NSString deviceID;
@property (nonatomic) NSNumber currentAverageRTT;
@property (nonatomic) NSNumber isDeviceBlackedOut;
@property (nonatomic) NSNumber localMessageState;
@property (nonatomic) NSNumber endpointState;
@property (nonatomic) NSString wpConnectionErrorDomain;
@property (nonatomic) NSNumber wpConnectionErrorCode;
@property (nonatomic) NSDictionary wpConnectionErrorUserInfo;
- (id)responseError;
- (void)setResponseError:;
- (id)responseTimeStamp;
- (id)failureReason;
- (void)setEndpointState:;
- (void)setLocalMessageState:;
- (id)initWithError:;
- (id)localMessageState;
- (void)setWpConnectionErrorCode:;
- (void)setIsDeviceBlackedOut:;
- (id)initWithServerResponseDictionary:;
- (BOOL)lastCall;
- (id)wpConnectionErrorDomain;
- (void)setResponseToken:;
- (long long)responseCode;
- (void)setCurrentAverageRTT:;
- (void)setLastCall:;
- (void)setDisplayIDs:;
- (id)responseCommand;
- (void)setDeviceID:;
- (id)deviceID;
- (id)responseToken;
- (id)currentAverageRTT;
- (id)wpConnectionErrorUserInfo;
- (id)wpConnectionErrorCode;
- (BOOL)lastCourierAck;
- (void).cxx_destruct;
- (void)setFailureReason:;
- (id)initWithResponseCode:deviceID:currentAverageRTT:isDeviceBlackedOut:localMessageState:;
- (id)deliveryError;
- (void)setResponseCode:;
- (void)setDeliveryError:;
- (void)setWpConnectionErrorUserInfo:;
- (void)setResponseCommand:;
- (void)setWpConnectionErrorDomain:;
- (void)setIdsResponseCode:;
- (id)displayIDs;
- (id)endpointState;
- (id)initWithResponseCode:error:lastCall:;
- (void)setResponseTimeStamp:;
- (long long)idsResponseCode;
- (id)initWithResponseCode:deviceID:;
- (void)setLastCourierAck:;
- (id)isDeviceBlackedOut;
+ (long long)_endpointStateForServerDeliveryStatus:;
@end
