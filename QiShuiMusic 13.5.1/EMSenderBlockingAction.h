@interface EMSenderBlockingAction : EMMessageChangeAction
@property (nonatomic) BOOL blockSender;
- (long long)signpostType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithMessageListItems:blockSender:;
- (BOOL)blockSender;
+ (BOOL)supportsSecureCoding;
@end
