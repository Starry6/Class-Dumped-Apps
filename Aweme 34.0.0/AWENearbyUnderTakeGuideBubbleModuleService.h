@interface AWENearbyUnderTakeGuideBubbleModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showUnderTakeBubbleIfNeedWithEnterBubble:pageType:;
- (void)showDialogClickedBubbleIfNeedWithEnterBubble:pageType:;
- (void)showTaskTabTabBubbleWithEnterBubble:pageType:task:;
- (void)shouldShowUndertakeBubbleWithPageType:;
- (id)getUndertakeEnterBubbleWithPageType:;
- (void)updateNeedShowDialogClickBubble:;
- (BOOL)getNeedShowDialogClickBubble;
@end
