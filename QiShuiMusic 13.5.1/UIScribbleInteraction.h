@interface UIScribbleInteraction : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) BOOL _defaultSystemInteraction;
@property (nonatomic) <UIScribbleInteractionDelegate> delegate;
@property (nonatomic) BOOL handlingWriting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)scribbleInteractionWrapper;
- (void)didMoveToView:;
- (void)willMoveToView:;
- (BOOL)isHandlingWriting;
- (void)_setDefaultSystemInteraction:;
- (id)view;
- (void)_setHandlingWriting:;
- (BOOL)_isDefaultSystemInteraction;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)setView:;
+ (BOOL)isPencilInputExpected;
+ (double)_recommendedBlankSpaceHeight;
+ (void)_lastEventSourceChanged:;
@end
