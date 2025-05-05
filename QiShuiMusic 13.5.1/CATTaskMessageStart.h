@interface CATTaskMessageStart : CATTaskMessage
@property (nonatomic) CATTaskRequest request;
- (id)initWithCoder:;
- (id)request;
- (void)encodeWithCoder:;
- (id)initWithTaskUUID:request:;
- (void).cxx_destruct;
- (void)setRequest:;
+ (BOOL)supportsSecureCoding;
@end
