@interface DNDSystemAction : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) WFToggleSettingContextualAction action;
@property (nonatomic) WFReverseContextualAction reverseAction;
@property (nonatomic) BOOL enabled;
- (id)identifier;
- (id)action;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEnabled;
- (id)initWithAction:enabled:;
- (id)initWithAction:reverseAction:enabled:;
- (id)reverseAction;
+ (BOOL)supportsSecureCoding;
+ (BOOL)runtimeIsSupported:;
@end
