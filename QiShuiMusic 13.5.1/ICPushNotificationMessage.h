@interface ICPushNotificationMessage : NSObject
@property (nonatomic) q sagaServerRevision;
@property (nonatomic) NSArray sagaUpdatedSubscribedPlaylistIDs;
@property (nonatomic) q jaliscoServerRevision;
@property (nonatomic) NSArray jaliscoChangedMediaTypes;
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) q moduleIdentifier;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) q accountDSID;
@property (nonatomic) q actionType;
@property (nonatomic) NSDictionary apsPayload;
- (long long)moduleIdentifier;
- (long long)actionType;
- (id)userInfo;
- (long long)accountDSID;
- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)initWithMessageUserInfo:;
- (id)apsPayload;
- (long long)sagaServerRevision;
- (id)sagaUpdatedSubscribedPlaylistIDs;
- (long long)jaliscoServerRevision;
- (id)jaliscoChangedMediaTypes;
@end
