@interface UIUserNotificationCategory : NSObject
@property (nonatomic) NSDictionary actionsByContext;
@property (nonatomic) NSString identifier;
- (id)init;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)actions;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)actionsForContext:;
- (unsigned long long)_maximumActionsForContext:;
- (id)actionsByContext;
- (void)setActionsByContext:;
- (id)initWithIdentifier:actionsByContext:;
- (id)validatedCategory;
+ (BOOL)supportsSecureCoding;
@end
