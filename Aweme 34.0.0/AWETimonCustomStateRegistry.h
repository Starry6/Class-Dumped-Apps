@interface AWETimonCustomStateRegistry : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)teenModeDidChange:isLogout:;
- (void)basicModeDidChange:;
- (void)pasteboardCanAutoreadDidChange:;
- (id)init;
- (void)dealloc;
+ (void)registerCustomParams;
+ (id)__pageNameForControllerName:;
+ (BOOL)enableListenParameter;
+ (void)_registerCurrentPage;
+ (void)_registerIsInSplash;
+ (void)_registerAutoReadPasteboard;
+ (void)_registerContentDetectService;
+ (void)listenPrivacyPolicyAgree;
+ (void)_registAlbumEXIFInfo;
+ (void)privacyPolicyAgreeDidChange:;
+ (void)topViewControllerChange:;
+ (id)sharedInstance;
@end
