@interface CPLFeedbackMessage : NSObject
@property (nonatomic) NSString libraryIdentifier;
@property (nonatomic) NSString libraryIdentifierDescription;
@property (nonatomic) NSString feedbackType;
@property (nonatomic) CPLServerFeedbackMessage serverMessage;
- (id)feedbackType;
- (id)libraryIdentifier;
- (void).cxx_destruct;
- (id)initWithLibraryIdentifier:;
- (id)libraryIdentifierDescription;
- (id)serverMessage;
+ (id)feedbackType;
@end
