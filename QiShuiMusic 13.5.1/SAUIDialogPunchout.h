@interface SAUIDialogPunchout : SAAceView
@property (nonatomic) SAUIButton buttonView;
@property (nonatomic) SAUIAssistantUtteranceView utteranceView;
- (id)_af_dialogIdentifier;
- (void)af_addEntriesToAnalyticsContext:;
- (id)af_dialogIdentifiersForAnalyticsContext;
- (void)setButtonView:;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)buttonView;
- (id)utteranceView;
- (void)setUtteranceView:;
+ (id)dialogPunchout;
+ (id)dialogPunchoutWithDictionary:context:;
@end
