@interface APBRequest : NSObject
@property (nonatomic) UIViewController vc;
@property (nonatomic) NSString protocol;
@property (nonatomic) NSDictionary extInfo;
- (id)extInfo;
- (id)initWithViewController:protocolInfo:extInfo:;
- (void)setExtInfo:;
- (void)setVc:;
- (id)protocol;
- (void)setProtocol:;
- (void).cxx_destruct;
- (id)vc;
@end
