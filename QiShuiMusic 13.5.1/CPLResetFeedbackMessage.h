@interface CPLResetFeedbackMessage : CPLFeedbackMessage
@property (nonatomic) NSString resetType;
@property (nonatomic) NSString reason;
@property (nonatomic) NSString uuid;
- (id)uuid;
- (id)reason;
- (void).cxx_destruct;
- (id)serverMessage;
- (id)initWithResetType:reason:uuid:libraryIdentifier:;
- (id)resetType;
+ (id)feedbackType;
@end
