@interface AWEUnloginTeenmodeModel : AWEBaseApiModel
@property (nonatomic) BOOL teenModeEnabled;
@property (nonatomic) NSString password;
@property (nonatomic) BOOL hasPassword;
- (BOOL)teenModeEnabled;
- (void)setTeenModeEnabled:;
- (id)password;
- (void)setPassword:;
- (BOOL)hasPassword;
- (void).cxx_destruct;
- (void)setHasPassword:;
+ (id)JSONKeyPathsByPropertyKey;
@end
