@interface CNContactListSetMyCardAction : CNContactListUndoableAction
@property (nonatomic) CNContact originalMeContact;
- (void)performAction;
- (void).cxx_destruct;
- (void)performUndoAction;
- (id)initWithContact:configuration:;
- (id)updatedMeContact;
- (void)fetchOriginalMeContact;
- (void)updateMeContact:;
- (id)originalMeContact;
- (void)setOriginalMeContact:;
+ (id)log;
@end
