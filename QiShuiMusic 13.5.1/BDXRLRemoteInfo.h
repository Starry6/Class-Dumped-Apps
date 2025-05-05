@interface BDXRLRemoteInfo : NSObject
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString bundle;
@property (nonatomic) BOOL extractAkByLocalRule;
- (BOOL)extractAkByLocalRule;
- (void)setExtractAkByLocalRule:;
- (void)setChannel:;
- (id)channel;
- (id)bundle;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setBundle:;
- (id)accessKey;
- (void)setAccessKey:;
+ (id)extractPrefixFromUrlString:;
@end
