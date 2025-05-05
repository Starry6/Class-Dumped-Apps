@interface WFReverseContextualAction : WFContextualAction
@property (nonatomic) NSData reversalState;
@property (nonatomic) WFContextualAction actionToReverse;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)reversalState;
- (id)initWithActionToReverse:reversalState:;
- (id)actionToReverse;
+ (BOOL)supportsSecureCoding;
@end
