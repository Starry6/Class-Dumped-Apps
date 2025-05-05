@interface EMMessageFollowUpAction : EMMessageChangeAction
@property (nonatomic) EMFollowUp followUp;
- (long long)signpostType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)followUp;
- (id)initWithMessageListItems:followUp:;
+ (BOOL)supportsSecureCoding;
@end
