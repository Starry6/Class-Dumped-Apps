@interface AWEFeedCountManager : NSObject
@property (nonatomic) q feedCount;
@property (nonatomic) q currentFeedCount;
@property (nonatomic) NSMutableDictionary currentFeedCountTimeDictionary;
@property (nonatomic) q maxFeedCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (long long)feedCount;
- (void)setFeedCount:;
- (long long)currentFeedCount;
- (void)setCurrentFeedCount:;
- (id)currentFeedCountTimeDictionary;
- (void)showForModel:;
- (void)resetFeedCount;
- (long long)maxFeedCount;
- (void)setCurrentFeedCountTimeDictionary:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
+ (id)dateFormatter;
@end
