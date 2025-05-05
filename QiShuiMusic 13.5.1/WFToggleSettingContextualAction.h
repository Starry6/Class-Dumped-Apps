@interface WFToggleSettingContextualAction : WFContextualAction
@property (nonatomic) Q setting;
@property (nonatomic) Q operation;
- (unsigned long long)operation;
- (id)uniqueIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (unsigned long long)setting;
- (id)initWithSetting:operation:;
- (BOOL)isReversible;
+ (BOOL)supportsSecureCoding;
@end
