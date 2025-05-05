@interface CNPropertyLinkedCardsAction : CNPropertyAction
@property (nonatomic) CNContactContentViewController contactController;
@property (nonatomic) CNMutableContact linkedContact;
@property (nonatomic) <CNContactContentViewControllerDelegate> contactDelegate;
- (void)dealloc;
- (id)initWithContact:;
- (void).cxx_destruct;
- (void)setContactDelegate:;
- (id)contactDelegate;
- (void)performActionForItem:sender:;
- (void)setPreferredForImage;
- (void)setPreferredForName;
- (id)contactController;
- (void)setContactController:;
- (id)linkedContact;
- (void)setLinkedContact:;
@end
