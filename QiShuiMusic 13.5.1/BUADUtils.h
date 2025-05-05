@interface BUADUtils : NSObject
@property (nonatomic) BOOL isDebug;
@property (nonatomic) BOOL isDemo;
@property (nonatomic) @? trackerBlock;
@property (nonatomic) NSString csjABVersionForM;
- (id)csjABVersionForM;
- (void)setCsjABVersionForM:;
- (void)setTrackerBlock:;
- (id)trackerBlock;
- (void).cxx_destruct;
- (BOOL)isDebug;
- (void)setIsDebug:;
- (BOOL)isDemo;
- (void)setIsDemo:;
+ (id)sharedInstance;
@end
