@interface BisClientConfig : NSObject
@property (nonatomic) BisClientConfigContent content;
@property (nonatomic) NSString sign;
- (void)setSign:;
- (id)sign;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
@end
