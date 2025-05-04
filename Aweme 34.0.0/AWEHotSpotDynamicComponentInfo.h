@interface AWEHotSpotDynamicComponentInfo : NSObject
@property (nonatomic) NSString url;
@property (nonatomic) NSString bundle;
@property (nonatomic) NSString channel;
- (id)initWithUrl:bundle:channel:;
- (unsigned long long)hash;
- (void)setUrl:;
- (id)channel;
- (id)bundle;
- (void)setChannel:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)url;
- (void)setBundle:;
@end
