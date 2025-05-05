@interface WFInputDateDialogResponse : WFDialogResponse
@property (nonatomic) NSDate inputtedDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithBSXPCCoder:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:;
- (id)description;
- (id)initWithInputtedDate:cancelled:;
- (id)inputtedDate;
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
@end
