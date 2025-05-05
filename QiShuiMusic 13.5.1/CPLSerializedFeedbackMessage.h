@interface CPLSerializedFeedbackMessage : NSObject
@property (nonatomic) NSUUID uuid;
@property (nonatomic) NSString feedbackType;
@property (nonatomic) CPLServerFeedbackMessage serverMessage;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (id)feedbackType;
- (id)uuid;
- (id)initWithDictionaryRepresentation:;
- (id)initWithMessage:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)serverMessage;
+ (id)plistRepresentationForMessages:;
+ (id)messagesForPlistRepresentation:;
@end
