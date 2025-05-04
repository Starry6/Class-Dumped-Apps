@interface AWEShowMonetizeRefreshContext : NSObject
@property (nonatomic) AWEShowMonetizeRefreshConfig config;
@property (nonatomic) NSString contentID;
@property (nonatomic) Q reason;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void)setReason:;
- (id)contentID;
- (void).cxx_destruct;
- (unsigned long long)reason;
@end
