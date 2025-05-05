@interface OspreyConnectionHandle : NSObject
@property (nonatomic) @ connectionKey;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConnectionKey:willRelease:;
- (id)connectionKey;
@end
