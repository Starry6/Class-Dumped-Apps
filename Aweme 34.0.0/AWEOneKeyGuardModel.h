@interface AWEOneKeyGuardModel : AWEBaseApiModel
@property (nonatomic) q buttonType;
@property (nonatomic) BOOL open;
@property (nonatomic) q protectDays;
- (long long)protectDays;
- (void)setProtectDays:;
- (long long)buttonType;
- (BOOL)open;
- (id)init;
- (void)setOpen:;
- (void)setButtonType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
