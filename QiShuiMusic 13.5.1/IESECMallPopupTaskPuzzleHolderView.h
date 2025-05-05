@interface IESECMallPopupTaskPuzzleHolderView : IESECMallPopupTaskBaseView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)kitView:willCreatedWithContext:;
- (id)initWithPopupConfig:delegate:uniqueId:;
- (void)kitViewWillDealloc:;
- (void)showInView:zIndex:;
- (void)showInWindowWithZIndex:;
- (void)dismiss;
- (void)dealloc;
@end
