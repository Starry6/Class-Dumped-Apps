@interface CATTaskMessageProgressUpdate : CATTaskMessage
@property (nonatomic) CATTaskProgress progress;
- (void)setProgress:;
- (id)initWithCoder:;
- (id)progress;
- (void)encodeWithCoder:;
- (id)initWithTaskUUID:progress:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
