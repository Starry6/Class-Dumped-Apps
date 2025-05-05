@interface IESLatchAttachState : NSObject
@property (nonatomic) q code;
@property (nonatomic) NSString message;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (id)extra;
- (void)setMessage:;
- (long long)code;
- (id)message;
- (void).cxx_destruct;
- (void)setCode:;
@end
