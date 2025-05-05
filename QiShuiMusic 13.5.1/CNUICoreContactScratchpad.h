@interface CNUICoreContactScratchpad : NSObject
@property (nonatomic) NSSet edits;
@property (nonatomic) NSSet allContacts;
@property (nonatomic) NSSet modifiedContacts;
- (id)init;
- (id)allContacts;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)edits;
- (id)initWithEdits:;
- (id)scratchpadByAddingContacts:;
- (id)scratchpadByRemovingContacts:;
- (id)scratchpadByKeepingContacts:;
- (id)modifiedContactForContact:;
- (id)modifiedIfPresentOtherwiseOriginalContactForContact:;
- (BOOL)containsContact:;
- (id)modifiedContacts;
+ (id)emptyScratchpad;
+ (id)scratchpadByAddingUneditedContact:toScratchpad:;
+ (id)scratchpadBySettingModifiedContact:onExistingEditInScratchpad:;
+ (id)editMatchingContact:inEdits:;
+ (id)editsByReplacingEdit:withUpdatedEdit:inEdits:;
+ (id)scratchpadByRemovingModifiedContact:fromScratchpad:;
@end
