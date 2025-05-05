@interface CATTaskMessage : CATMessage
@property (nonatomic) NSUUID taskUUID;
- (id)taskUUID;
- (id)initWithCoder:;
- (void)setTaskUUID:;
- (void)encodeWithCoder:;
- (id)initWithTaskUUID:;
- (void).cxx_destruct;
- (id)description;
+ (BOOL)supportsSecureCoding;
@end
