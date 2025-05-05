@interface CKEventOperationGroupInfo : NSObject
@property (nonatomic) NSString operationGroupID;
@property (nonatomic) NSString operationGroupName;
- (id)operationGroupName;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)operationGroupID;
+ (BOOL)supportsSecureCoding;
@end
