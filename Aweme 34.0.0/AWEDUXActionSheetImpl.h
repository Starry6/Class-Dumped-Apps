@interface AWEDUXActionSheetImpl : NSObject
@property (nonatomic) DUXActionSheet sheet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <ACCDUXActionSheetDelegate> delegate;
@property (nonatomic) NSArray itemTexts;
@property (nonatomic) NSString title;
@property (nonatomic) @? actionHandler;
- (void)actionSheet:didClickButtonAtIndex:;
- (id)p_title;
- (id)p_actionItems;
- (id)itemTexts;
- (void)setItemTexts:;
- (id)actionHandler;
- (void)setActionHandler:;
- (void)show;
- (void)dealloc;
- (id)delegate;
- (void).cxx_destruct;
- (id)title;
- (void)setDelegate:;
- (void)setTitle:;
- (void)showInView:;
- (id)sheet;
- (void)setSheet:;
@end
