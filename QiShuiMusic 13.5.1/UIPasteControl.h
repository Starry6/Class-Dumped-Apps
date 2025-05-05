@interface UIPasteControl : UIControl
@property (nonatomic) UIPasteControlConfiguration configuration;
@property (nonatomic) <UIPasteConfigurationSupporting> target;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (id)_encodableSubviews;
- (id)initWithCoder:;
- (void)setTarget:;
- (id)initWithFrame:;
- (void)encodeWithCoder:;
- (id)configuration;
- (id)sizeThatFits:;
- (void)setEnabled:;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (id)target;
- (void)endTrackingWithTouch:withEvent:;
- (id)initWithConfiguration:;
- (unsigned int)_secureName;
- (BOOL)shouldTrack;
- (void)_updateEnabledWithNotification:;
- (BOOL)isInternallyEnabled;
- (id)synchronousSecureControlService;
@end
