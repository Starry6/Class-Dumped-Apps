@interface AVCustomRoutingPartialIP : NSObject
@property (nonatomic) NSData address;
@property (nonatomic) NSData mask;
- (void).cxx_destruct;
- (id)mask;
- (id)address;
- (id)initWithAddress:mask:;
@end
