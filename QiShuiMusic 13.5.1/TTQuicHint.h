@interface TTQuicHint : NSObject
@property (nonatomic) NSString Host;
@property (nonatomic) NSInteger Port;
@property (nonatomic) NSInteger AlterPort;
- (int)AlterPort;
- (id)Host;
- (void)setAlterPort:;
- (void)setHost:;
- (void)setPort:;
- (void).cxx_destruct;
- (int)Port;
@end
