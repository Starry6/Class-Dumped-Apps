@interface BTDALBackUrl : NSObject
@property (nonatomic) NSString backUrlScheme;
@property (nonatomic) NSString backUrlHost;
@property (nonatomic) NSString backUrl;
- (id)backUrl;
- (void)setBackUrlHost:;
- (id)backUrlHost;
- (id)backUrlScheme;
- (void)setBackUrl:;
- (void)setBackUrlScheme:;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
@end
