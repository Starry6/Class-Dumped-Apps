@interface SAUIAssistantUtteranceView : SAAceView
@property (nonatomic) NSString dialogIdentifier;
@property (nonatomic) NSNumber postDialogDelayInMilliseconds;
@property (nonatomic) NSString text;
- (id)_af_dialogIdentifier;
- (void)af_addEntriesToAnalyticsContext:;
- (id)af_dialogIdentifiersForAnalyticsContext;
- (BOOL)af_isUtterance;
- (id)af_dialogIdentifier;
- (id)af_text;
- (id)af_speakableText;
- (id)groupIdentifier;
- (void)setText:;
- (id)encodedClassName;
- (id)text;
- (void)setDialogIdentifier:;
- (id)dialogIdentifier;
- (id)postDialogDelayInMilliseconds;
- (void)setPostDialogDelayInMilliseconds:;
+ (id)assistantUtteranceView;
+ (id)assistantUtteranceViewWithDictionary:context:;
@end
