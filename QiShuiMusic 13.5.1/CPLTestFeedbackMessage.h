@interface CPLTestFeedbackMessage : CPLFeedbackMessage
@property (nonatomic) NSString testMessage;
- (void).cxx_destruct;
- (id)serverMessage;
- (id)initWithTestMessage:libraryIdentifier:;
- (id)testMessage;
+ (id)feedbackType;
@end
