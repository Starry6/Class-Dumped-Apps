@interface UIUserNotificationActionSettings : NSObject
@property (nonatomic) NSString category;
@property (nonatomic) NSDictionary actionsByContext;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)actions;
- (void)setCategory:;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)category;
- (id)copyWithZone:;
- (id)initWithCategory:actionsByContext:;
- (id)actionsForContext:;
- (id)validatedSettings;
- (unsigned long long)_maximumActionsForContext:;
- (id)actionsByContext;
- (void)setActionsByContext:;
+ (BOOL)supportsSecureCoding;
@end
