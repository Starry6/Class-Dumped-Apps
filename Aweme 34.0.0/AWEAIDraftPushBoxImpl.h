@interface AWEAIDraftPushBoxImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showAIDoingInnerNotificationWithCover:;
- (void)showAIDoingInnerNotificationWithCover:isTemplate:;
- (void)showAIDoneInnerNotificationWithDraft:isTemplate:title:cover:touchedHandler:completion:;
- (void)showDialogWithDraftId:headingContent:cover:clickActionBlock:completion:;
@end
