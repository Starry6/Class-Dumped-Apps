@interface DAMoveAction : DAAction
@property (nonatomic) NSString sourceContainerId;
@property (nonatomic) NSString sourceServerId;
@property (nonatomic) NSString destinationContainerId;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithItemChangeType:changedItem:sourceContainerId:sourceServerId:destinationContainerId:;
- (id)sourceContainerId;
- (void)setSourceContainerId:;
- (id)sourceServerId;
- (void)setSourceServerId:;
- (id)destinationContainerId;
- (void)setDestinationContainerId:;
+ (BOOL)supportsSecureCoding;
@end
