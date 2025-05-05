@interface PKScribbleInteraction : NSObject
@property (nonatomic) <PKScribbleInteractionDelegate> delegate;
@property (nonatomic) <PKScribbleInteractionElementSource> elementSource;
@property (nonatomic) UIView view;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)scribbleInteractionWrapper;
- (void)setDelegate:;
- (void)didMoveToView:;
- (void)willMoveToView:;
- (void)setElementSource:;
- (id)view;
- (id)delegate;
- (void).cxx_destruct;
- (id)elementSource;
@end
