@interface AWEProfileHeaderConfiguration : NSObject
@property (nonatomic) NSString userID;
@property (nonatomic) NSString nickname;
@property (nonatomic) q profileType;
@property (nonatomic) BOOL fromHomePage;
@property (nonatomic) AWEProfileContext context;
@property (nonatomic) AWEUserModel userModel;
- (BOOL)fromHomePage;
- (void)setFromHomePage:;
- (id)nickname;
- (id)userID;
- (void)setUserModel:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)userModel;
- (id)context;
- (void)setNickname:;
- (void)setUserID:;
- (void)setProfileType:;
- (long long)profileType;
@end
