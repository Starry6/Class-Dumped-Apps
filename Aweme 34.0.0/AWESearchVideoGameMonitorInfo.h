@interface AWESearchVideoGameMonitorInfo : AWEBaseApiModel
@property (nonatomic) NSString monitorURL;
@property (nonatomic) BOOL shouldAppendIdentity;
@property (nonatomic) NSString openGameUrl;
- (void)setMonitorURL:;
- (void)setShouldAppendIdentity:;
- (void)setOpenGameUrl:;
- (id)monitorURL;
- (BOOL)shouldAppendIdentity;
- (id)openGameUrl;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
