@interface IESSaaSTIMOClient : NSObject
@property (nonatomic) q currentUserID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loginWithUserID:secUserID:completion:;
- (void)loginWithUserID:secUserID:token:completion:;
- (void)logoutWithCompletion:;
- (void)p_handleTokenInvalidNotification:;
- (void)updateToken:forUser:withCompletion:;
- (id)init;
- (void)dealloc;
- (long long)currentUserID;
+ (id)gitHash;
+ (id)version;
+ (id)buildNumber;
+ (id)client;
@end
