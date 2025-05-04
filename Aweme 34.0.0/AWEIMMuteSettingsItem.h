@interface AWEIMMuteSettingsItem : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) BOOL isOn;
@property (nonatomic) q mask;
- (BOOL)isOn;
- (void)setMask:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (long long)mask;
- (void)setIsOn:;
+ (id)itemWithTitle:mask:isOn:;
@end
