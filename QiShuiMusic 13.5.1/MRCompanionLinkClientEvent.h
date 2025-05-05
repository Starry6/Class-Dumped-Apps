@interface MRCompanionLinkClientEvent : NSObject
@property (nonatomic) NSString eventID;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) NSString destination;
@property (nonatomic) NSString uid;
- (void)setDestination:;
- (void)setEventID:;
- (id)userInfo;
- (id)uid;
- (void)setUid:;
- (id)eventID;
- (id)destination;
- (void)setUserInfo:;
- (void).cxx_destruct;
@end
