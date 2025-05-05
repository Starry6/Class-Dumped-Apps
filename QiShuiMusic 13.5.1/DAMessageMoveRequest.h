@interface DAMessageMoveRequest : NSObject
@property (nonatomic) NSString message;
@property (nonatomic) NSString fromFolder;
@property (nonatomic) NSString toFolder;
@property (nonatomic) @ context;
- (void)setMessage:;
- (id)context;
- (unsigned long long)hash;
- (id)message;
- (void).cxx_destruct;
- (id)description;
- (void)setContext:;
- (BOOL)isEqual:;
- (id)initMoveRequestWithMessage:fromFolder:toFolder:;
- (id)fromFolder;
- (void)setFromFolder:;
- (id)toFolder;
- (void)setToFolder:;
@end
