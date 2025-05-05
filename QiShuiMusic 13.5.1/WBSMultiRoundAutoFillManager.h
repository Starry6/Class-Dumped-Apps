@interface WBSMultiRoundAutoFillManager : NSObject
@property (nonatomic) NSString addressSetLabelUsedDuringFirstAutoFillPass;
@property (nonatomic) NSSet addressBookPropertiesThatCanBeFilled;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)shouldAttemptFollowUpAutoFillInFormWithMetadata:requestType:;
- (void)addControlUniqueIDsIgnoredByFollowUpAutoFill:;
- (unsigned long long)currentAutoFillAttemptTrigger;
- (void)dispatchFollowUpAutoFillOfFormWithMetdata:autoFillBlock:;
- (void)didEditFormText;
- (void)addControlUniqueIDIgnoredByFollowUpAutoFill:;
- (BOOL)shouldControlBeIgnoredByFollowUpAutoFill:;
- (void)setAddressBookPropertiesThatCanBeFilled:;
- (id)addressSetLabelUsedDuringFirstAutoFillPass;
- (void)setAddressSetLabelUsedDuringFirstAutoFillPass:;
- (id)addressBookPropertiesThatCanBeFilled;
@end
