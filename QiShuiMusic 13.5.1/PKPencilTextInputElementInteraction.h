@interface PKPencilTextInputElementInteraction : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) <PKPencilTextInputElementInteractionDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)scribbleInteractionWrapper;
- (void)setDelegate:;
- (void)didMoveToView:;
- (void)willMoveToView:;
- (id)view;
- (id)delegate;
- (void).cxx_destruct;
- (void)setView:;
+ (id)_pencilTextInputElementInteractionInView:;
@end
