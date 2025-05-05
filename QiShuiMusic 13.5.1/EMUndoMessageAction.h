@interface EMUndoMessageAction : EMMessageChangeAction
@property (nonatomic) NSArray individualActions;
- (long long)signpostType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithIndividualActions:;
- (id)individualActions;
+ (BOOL)supportsSecureCoding;
@end
