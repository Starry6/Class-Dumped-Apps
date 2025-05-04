@interface AWENewUserFeedStatics : NSObject
@property (nonatomic) NSArray cache;
@property (nonatomic) q maxSize;
- (void)addItem:channel:action:;
- (id)generateNewUserFeedStatics;
- (void)addItem:channel:action:followUserId:;
- (long long)integerFromChannelString:;
- (long long)maxSize;
- (void)setCache:;
- (void)setMaxSize:;
- (id)cache;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
