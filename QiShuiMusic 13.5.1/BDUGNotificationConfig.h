@interface BDUGNotificationConfig : NSObject
@property (nonatomic) NSSet categories;
@property (nonatomic) Q options;
- (void)setOptions:;
- (void)setCategories:;
- (unsigned long long)options;
- (void).cxx_destruct;
- (id)categories;
+ (id)configureNotificationWithCategories:options:;
@end
