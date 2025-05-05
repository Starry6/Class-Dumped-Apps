@interface CNPropertyAction : CNContactAction
@property (nonatomic) <CNPropertyActionDelegate> delegate;
@property (nonatomic) NSArray propertyItems;
@property (nonatomic) CNPropertyGroupItem propertyItem;
- (id)initWithContact:;
- (void).cxx_destruct;
- (BOOL)canPerformAction;
- (void)performActionWithSender:;
- (void)performActionForItem:sender:;
- (id)propertyItems;
- (id)initWithContact:propertyItems:;
- (id)propertyItem;
- (id)initWithContact:propertyItem:;
- (void)setPropertyItems:;
- (void)presentDisambiguationAlertWithSender:;
+ (void)performDefaultActionForItem:sender:;
@end
