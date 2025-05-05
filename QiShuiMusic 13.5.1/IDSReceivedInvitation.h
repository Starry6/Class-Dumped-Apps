@interface IDSReceivedInvitation : IDSInvitation
@property (nonatomic) NSString fromID;
- (void)setState:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setContext:;
- (BOOL)isEqual:;
- (id)fromID;
- (void)setSenderMergeID:;
- (id)initWithfromID:state:expirationDate:uniqueID:context:;
+ (BOOL)supportsSecureCoding;
@end
