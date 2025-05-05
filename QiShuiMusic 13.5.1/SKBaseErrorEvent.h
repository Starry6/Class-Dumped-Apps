@interface SKBaseErrorEvent : NSObject
@property (nonatomic) NSError primaryError;
@property (nonatomic) NSError mappedError;
@property (nonatomic) NSString inAppPurchaseID;
@property (nonatomic) NSString serverCorrelationID;
@property (nonatomic) NSString environment;
@property (nonatomic) q userAction;
@property (nonatomic) NSString eventName;
@property (nonatomic) BOOL canCreatePayload;
- (void)setEnvironment:;
- (id)environment;
- (id)eventName;
- (void).cxx_destruct;
- (long long)userAction;
- (id)createPayload;
- (BOOL)canCreatePayload;
- (id)primaryError;
- (void)setPrimaryError:;
- (id)mappedError;
- (void)setMappedError:;
- (id)inAppPurchaseID;
- (void)setInAppPurchaseID:;
- (id)serverCorrelationID;
- (void)setServerCorrelationID:;
- (void)setUserAction:;
@end
