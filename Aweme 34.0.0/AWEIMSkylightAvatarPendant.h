@interface AWEIMSkylightAvatarPendant : NSObject
@property (nonatomic) Q state;
@property (nonatomic) BOOL isOnlineValid;
@property (nonatomic) AWEIMOnlineContactAvatarViewModel model;
@property (nonatomic) NSString pageIdentifier;
@property (nonatomic) NSString uniqueFlag;
- (void)setUniqueFlag:;
- (id)uniqueFlag;
- (void)p_makeDecision;
- (BOOL)p_isOnlineWithModel:;
- (BOOL)isOnlineValid;
- (void)setIsOnlineValid:;
- (void)updateOnlineStatus;
- (void)setModel:;
- (unsigned long long)state;
- (id)model;
- (void).cxx_destruct;
- (void)updateStatus;
- (void)setState:;
- (id)pageIdentifier;
- (void)setPageIdentifier:;
@end
