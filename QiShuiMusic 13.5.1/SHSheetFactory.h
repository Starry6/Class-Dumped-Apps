@interface SHSheetFactory : NSObject
+ (id)createMainPresenterWithContext:;
+ (id)createContentViewControllerWithSession:presenter:;
+ (id)_createPlatformViewControllerWithSession:;
+ (id)createAirdropViewControllerWithNoContentView:delegate:;
+ (id)createUserDefaultsViewControllerWithContext:delegate:;
+ (id)createOptionsViewControllerWithContext:delegate:;
+ (id)createCollaborationOptionsViewControllerWithOptions:updateHandler:;
+ (id)createCollaborationParticipantsViewControllerWithContext:request:delegate:;
@end
