@interface HybridRLRemoteInfo : NSObject
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString bundle;
- (BOOL)isSetted;
- (void)setChannel:;
- (id)channel;
- (id)bundle;
- (void).cxx_destruct;
- (void)setBundle:;
- (id)accessKey;
- (void)setAccessKey:;
+ (id)extractPrefixFromUrlString:;
@end
