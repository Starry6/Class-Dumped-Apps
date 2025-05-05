@interface SBSFocusModesHomeScreenSnapshot : NSObject
@property (nonatomic) NSString listIdentifier;
@property (nonatomic) NSString focusModeIdentifier;
@property (nonatomic) BSMachPortSendRight machPortSendRight;
@property (nonatomic) BOOL wantsListVisible;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setListIdentifier:;
- (id)listIdentifier;
- (id)initWithBSXPCCoder:;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:;
- (id)focusModeIdentifier;
- (id)initWithListIdentifier:focusModeIdentifier:machPortSendRight:;
- (void)setFocusModeIdentifier:;
- (id)machPortSendRight;
- (void)setMachPortSendRight:;
- (BOOL)wantsListVisible;
- (void)setWantsListVisible:;
+ (BOOL)supportsBSXPCSecureCoding;
@end
