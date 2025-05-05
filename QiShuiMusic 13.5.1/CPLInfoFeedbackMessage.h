@interface CPLInfoFeedbackMessage : CPLFeedbackMessage
@property (nonatomic) NSDictionary info;
- (void).cxx_destruct;
- (id)info;
- (id)serverMessage;
- (id)initWithInfo:libraryIdentifier:;
+ (id)feedbackType;
@end
