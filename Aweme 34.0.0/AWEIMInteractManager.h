@interface AWEIMInteractManager : NSObject
@property (nonatomic) AWEIMStrangerMessage latestStrangerMsg;
- (id)latestStrangerMsg;
- (void)setLatestStrangerMsg:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
