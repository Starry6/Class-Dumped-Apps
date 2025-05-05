@interface BDNativeLogManager : NSObject
@property (nonatomic) @? logBlock;
- (void)configLogBlock:;
- (void)printLog:;
- (void).cxx_destruct;
- (id)logBlock;
- (void)setLogBlock:;
+ (id)sharedInstance;
@end
