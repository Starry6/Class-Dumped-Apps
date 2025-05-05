@interface CPLQuarantineFeedbackMessage : CPLFeedbackMessage
@property (nonatomic) NSString reason;
@property (nonatomic) # recordClass;
- (id)reason;
- (void).cxx_destruct;
- (Class)recordClass;
- (id)serverMessage;
- (id)initWithClass:reason:libraryIdentifier:;
+ (id)feedbackType;
@end
