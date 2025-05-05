@interface CKEventOperationInfo : NSObject
@property (nonatomic) NSString operationID;
@property (nonatomic) NSString operationType;
@property (nonatomic) NSString operationGroupID;
- (id)initWithOperation:;
- (id)operationType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)operationID;
- (void).cxx_destruct;
- (id)operationGroupID;
+ (BOOL)supportsSecureCoding;
@end
