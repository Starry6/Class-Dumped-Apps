@interface DAResponse : DAAction
@property (nonatomic) q status;
- (void)setStatus:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)status;
- (id)initWithItemChangeType:changedItem:serverId:status:;
+ (BOOL)supportsSecureCoding;
@end
