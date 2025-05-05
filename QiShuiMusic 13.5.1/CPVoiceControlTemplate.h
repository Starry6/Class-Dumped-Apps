@interface CPVoiceControlTemplate : CPTemplate
@property (nonatomic) NAFuture templateProviderFuture;
@property (nonatomic) NSArray voiceControlStates;
@property (nonatomic) NSString activeStateIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setTrailingNavigationBarButtons:;
- (id)leadingNavigationBarButtons;
- (void)setLeadingNavigationBarButtons:;
- (id)trailingNavigationBarButtons;
- (id)initWithVoiceControlStates:;
- (void)activateVoiceControlStateWithIdentifier:;
- (id)voiceControlStates;
- (id)activeStateIdentifier;
+ (BOOL)supportsSecureCoding;
@end
