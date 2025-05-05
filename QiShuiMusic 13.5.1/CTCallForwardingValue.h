@interface CTCallForwardingValue : NSObject
@property (nonatomic) NSInteger reason;
@property (nonatomic) NSInteger clss;
@property (nonatomic) BOOL enabled;
@property (nonatomic) NSString saveNumber;
@property (nonatomic) NSNumber noReplyTime;
- (BOOL)enabled;
- (int)reason;
- (id)initWithCoder:;
- (void)setReason:;
- (void)encodeWithCoder:;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (int)clss;
- (void)setClss:;
- (id)saveNumber;
- (void)setSaveNumber:;
- (id)noReplyTime;
- (void)setNoReplyTime:;
+ (BOOL)supportsSecureCoding;
@end
