@interface AWEIMStrangerQuickSettingResponseModel : AWEBaseApiModel
@property (nonatomic) BOOL open;
@property (nonatomic) q protectDays;
- (long long)protectDays;
- (void)setProtectDays:;
- (BOOL)open;
- (void)setOpen:;
+ (id)JSONKeyPathsByPropertyKey;
@end
