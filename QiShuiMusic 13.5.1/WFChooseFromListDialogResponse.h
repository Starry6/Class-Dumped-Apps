@interface WFChooseFromListDialogResponse : WFDialogResponse
@property (nonatomic) NSArray selectedItems;
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
- (id)selectedItems;
- (id)initWithItems:cancelled:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
@end
