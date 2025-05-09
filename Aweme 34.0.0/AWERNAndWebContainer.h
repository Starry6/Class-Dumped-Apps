@interface AWERNAndWebContainer : NSObject
@property (nonatomic) NSString schema;
@property (nonatomic) AWEAdWebViewController webViewController;
@property (nonatomic) @ baseBundleLoadNotiToken;
@property (nonatomic) @ businessBundleLoadNotiToken;
@property (nonatomic) NSString fallbackURL;
@property (nonatomic) <AWERNWebContainerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)reactID;
- (void)handleBroadcastNotification:;
- (id)contentVC;
- (void)handleApplicationWillResignActiveNotification:;
- (id)initWithSchema:params:;
- (id)baseBundleLoadNotiToken;
- (id)businessBundleLoadNotiToken;
- (id)reactContainerID;
- (BOOL)isRN;
- (BOOL)didFallbackInternally;
- (void)setBaseBundleLoadNotiToken:;
- (void)setBusinessBundleLoadNotiToken:;
- (id)schema;
- (void)dealloc;
- (void)setSchema:;
- (id)delegate;
- (id)contentController;
- (void).cxx_destruct;
- (id)fallbackURL;
- (void)setDelegate:;
- (void)setFallbackURL:;
- (id)webViewController;
- (void)setWebViewController:;
@end
