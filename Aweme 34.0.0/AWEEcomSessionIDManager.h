@interface AWEEcomSessionIDManager : NSObject
@property (nonatomic) NSString searchSessionID;
@property (nonatomic) UIViewController firstSearchVC;
@property (nonatomic) BOOL sessionIDDidUpdate;
- (void)onlyUpdateSessionID;
- (BOOL)shouldUpdateSessionID;
- (BOOL)sessionIDDidUpdate;
- (void)updateSessionID;
- (void)setSessionIDDidUpdate:;
- (void)setFirstSearchVC:;
- (id)firstSearchVC;
- (void)updateSessionIDWithSearchVC:;
- (void).cxx_destruct;
- (id)searchSessionID;
- (void)setSearchSessionID:;
+ (id)sharedInstance;
@end
