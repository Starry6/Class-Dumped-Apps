@interface CATTaskMessageError : CATTaskMessage
@property (nonatomic) NSError taskError;
- (id)initWithTaskUUID:taskError:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)taskError;
- (void)setTaskError:;
+ (BOOL)supportsSecureCoding;
@end
