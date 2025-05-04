@interface AWEFeedListenFeedModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)listenFeedPageTitleString;
- (id)listenFeedTextString;
- (BOOL)isListenFeedPlaying;
- (id)listenFeedManager;
- (BOOL)shouldShowListenFeedWithAwemeModel:referString:enterFrom:;
- (void)enterListenFeedWithModel:referString:playerController:enterMethod:enterTab:;
- (id)aAWEListenFeedAdapter;
+ (Class)aAWEListenFeedAdapterClass;
@end
