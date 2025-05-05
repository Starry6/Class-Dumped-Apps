@interface DSFileOperationID : NSObject
@property (nonatomic) NSUUID uuid;
- (id)initWithUUID:;
- (id)init;
- (id)uuid;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
