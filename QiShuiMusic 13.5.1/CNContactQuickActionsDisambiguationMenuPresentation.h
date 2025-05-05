@interface CNContactQuickActionsDisambiguationMenuPresentation : NSObject
- (id)viewControllerForPresentingActionsController:fromView:dismissDisambiguationMenuHandler:;
- (id)initBase;
+ (id)defaultPresentation;
+ (id)modalPresentation;
+ (id)alertSheetPresentation;
@end
