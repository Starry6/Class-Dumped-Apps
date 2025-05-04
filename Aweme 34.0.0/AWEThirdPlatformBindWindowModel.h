@interface AWEThirdPlatformBindWindowModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) q times;
@property (nonatomic) q interval;
@property (nonatomic) NSNumber openState;
@property (nonatomic) Q loginPlatform;
- (unsigned long long)loginPlatform;
- (void)setLoginPlatform:;
- (void)setOpenState:;
- (long long)interval;
- (void)setInterval:;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)openState;
- (long long)times;
- (void)setTimes:;
+ (id)loginPlatformJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
