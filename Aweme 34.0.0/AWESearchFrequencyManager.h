@interface AWESearchFrequencyManager : NSObject
@property (nonatomic) BOOL hitLimit;
@property (nonatomic) BOOL shouldLoginLimit;
@property (nonatomic) NSString statusMsg;
- (id)statusMsg;
- (void)setStatusMsg:;
- (BOOL)checkHitLimitWithStatusCode:andStatusMsg:;
- (BOOL)shouldLoginLimit;
- (BOOL)hitLimit;
- (void)setHitLimit:;
- (void)setShouldLoginLimit:;
- (void).cxx_destruct;
@end
