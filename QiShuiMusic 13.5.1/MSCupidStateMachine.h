@interface MSCupidStateMachine : NSObject
@property (nonatomic) NSMutableDictionary _userManifest;
@property (nonatomic) NSString personID;
@property (nonatomic) BOOL hasDeactivated;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)personID;
- (id)_userManifest;
- (void)deactivate;
- (void).cxx_destruct;
- (id)initWithPersonID:;
- (void)_abort;
- (void)protocol:didReceiveRetryAfterDate:;
- (void)_updateMasterManifest;
- (void)_forget;
- (void)forget;
- (void)_commitUserManifest;
- (void)_resetStreamsBackoffTimer;
- (void)_backoffStreamsBackoffTimer;
- (void)_didReceiveStreamsRetryAfterDate:;
- (void)_resetMMCSBackoffTimer;
- (void)_backoffMMCSBackoffTimer;
- (void)_didReceiveMMCSRetryAfterDate:;
- (id)_latestNextActivityDate;
- (void)set_userManifest:;
- (BOOL)hasDeactivated;
- (void)setHasDeactivated:;
@end
