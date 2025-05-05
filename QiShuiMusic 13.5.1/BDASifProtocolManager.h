@interface BDASifProtocolManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getAppScheme;
- (unsigned long long)getAppTheme;
- (id)getHostUserAgent;
- (void)openLive:;
- (void)requireLoginCompletion:;
- (BOOL)routeOpenURL:userInfo:;
- (id)getUserInfo;
- (void)openLink:;
+ (id)protocolImp;
+ (id)sharedInstance;
@end
