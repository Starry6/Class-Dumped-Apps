@interface UIToolTipInteraction : NSObject
@property (nonatomic) <UIToolTipInteractionDelegate> delegate;
@property (nonatomic) BOOL enabled;
@property (nonatomic) NSString defaultToolTip;
@property (nonatomic) UIView view;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setDelegate:;
- (void)didMoveToView:;
- (void)willMoveToView:;
- (id)view;
- (id)delegate;
- (void)setEnabled:;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (id)toolTipAtPoint:boundingRect:;
- (id)initWithDefaultToolTip:;
- (void)_refreshStyle;
- (void)_updateStyleForInteractionProperties;
- (id)defaultToolTip;
- (void)setDefaultToolTip:;
+ (id)visualStyleRegistryIdentity;
+ (id)_defaultToolTipInteractionFromInteractions:;
+ (id)_newDefaultToolTipInteraction;
@end
