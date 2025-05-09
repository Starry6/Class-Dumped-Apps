@interface ACDataclassAction : NSObject
@property (nonatomic) BOOL _error;
@property (nonatomic) q type;
@property (nonatomic) BOOL isDestructive;
@property (nonatomic) NSArray affectedContainers;
@property (nonatomic) NSString undoAlertTitle;
@property (nonatomic) NSString undoAlertMessage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isSafeForAutoEnablement;
- (id)_initWithProtobuf:;
- (BOOL)isDestructive;
- (id)_initWithProtobufData:;
- (id)_encodeProtobufData;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)type;
- (id)_encodeProtobuf;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (BOOL)_isError;
- (id)affectedContainers;
- (id)undoAlertTitle;
- (void)setUndoAlertTitle:;
- (id)undoAlertMessage;
- (void)setUndoAlertMessage:;
- (id)initWithType:destructivity:affectedContainers:;
+ (id)actionWithType:;
+ (BOOL)supportsSecureCoding;
+ (id)_actionForError:;
+ (id)destructiveActionWithType:;
+ (id)destructiveActionWithType:affectedContainers:;
@end
