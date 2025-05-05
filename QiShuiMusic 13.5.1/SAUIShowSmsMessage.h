@interface SAUIShowSmsMessage : SAUISnippet
@property (nonatomic) BOOL showAsDraft;
@property (nonatomic) SASmsSms sms;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)sms;
- (BOOL)showAsDraft;
- (void)setShowAsDraft:;
- (void)setSms:;
+ (id)showSmsMessage;
+ (id)showSmsMessageWithDictionary:context:;
@end
