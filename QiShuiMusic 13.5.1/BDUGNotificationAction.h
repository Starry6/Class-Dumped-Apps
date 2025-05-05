@interface BDUGNotificationAction : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString title;
@property (nonatomic) Q options;
@property (nonatomic) BDUGNotificationActionIcon icon;
- (void)setOptions:;
- (id)icon;
- (id)identifier;
- (void)setTitle:;
- (unsigned long long)options;
- (id)title;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setIdentifier:;
+ (id)actionWithIdentifier:title:options:icon:;
+ (id)actionWithIdentifier:title:options:;
@end
