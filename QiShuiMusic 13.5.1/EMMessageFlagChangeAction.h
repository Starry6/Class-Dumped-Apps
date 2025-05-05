@interface EMMessageFlagChangeAction : EMMessageChangeAction
@property (nonatomic) ECMessageFlagChange flagChange;
- (long long)signpostType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)flagChange;
- (id)initWithMessageListItems:flagChange:;
+ (BOOL)supportsSecureCoding;
@end
