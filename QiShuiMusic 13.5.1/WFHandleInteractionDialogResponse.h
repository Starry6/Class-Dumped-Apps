@interface WFHandleInteractionDialogResponse : WFDialogResponse
@property (nonatomic) Q interactionResponseCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithBSXPCCoder:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)encodeWithBSXPCCoder:;
- (id)description;
- (id)initWithInteractionResponseCode:;
- (unsigned long long)interactionResponseCode;
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
@end
