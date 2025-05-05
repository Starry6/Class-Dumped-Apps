@interface MEMessageActionDecision : NSObject
@property (nonatomic) NSArray actions;
@property (nonatomic) BOOL invokeAgainWithBody;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)actions;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (BOOL)invokeAgainWithBody;
- (id)initWithActions:invokeAgainWithBody:;
+ (BOOL)supportsSecureCoding;
+ (id)decisionApplyingAction:;
+ (id)decisionApplyingActions:;
+ (id)invokeAgainWithBody;
@end
