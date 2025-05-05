@interface WXAuthInternal : NSObject
@property (nonatomic) NSString scope;
@property (nonatomic) NSString state;
- (id)init;
- (void)setScope:;
- (void)setState:;
- (id)scope;
- (id)state;
- (void).cxx_destruct;
@end
