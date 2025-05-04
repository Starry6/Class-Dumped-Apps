@interface AWESavedDeleteBlockTokenManager : NSObject
@property (nonatomic) NSString latestToken;
@property (nonatomic) double cancelTime;
- (id)latestToken;
- (double)cancelTime;
- (void)setCancelTime:;
- (void)setLatestToken:;
- (void).cxx_destruct;
- (void)setToken:;
+ (id)sharedInstance;
@end
