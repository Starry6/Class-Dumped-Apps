@interface NPKey : NSObject
@property (nonatomic) I session_counter;
@property (nonatomic) NSInteger error;
@property (nonatomic) NSData info;
@property (nonatomic) NSUUID uuid;
@property (nonatomic) I flags;
@property (nonatomic) NSPNetworkAgent agentForKey;
- (id)uuid;
- (id)data;
- (void)setError:;
- (void)setInfo:;
- (void)setUuid:;
- (int)error;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)info;
- (void)setFlags:;
- (unsigned int)flags;
- (id)agentForKey;
- (unsigned int)session_counter;
- (void)setSession_counter:;
@end
