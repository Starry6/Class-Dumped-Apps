@interface IESForestQueryParameters : NSObject
@property (nonatomic) NSNumber waitGeckoUpdate;
@property (nonatomic) NSNumber onlyOnline;
@property (nonatomic) NSNumber dynamic;
@property (nonatomic) NSString prefix;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString bundle;
@property (nonatomic) IESForestSwitches switches;
- (id)waitGeckoUpdate;
- (id)onlyOnline;
- (void)setOnlyOnline:;
- (void)setWaitGeckoUpdate:;
- (void)setChannel:;
- (id)channel;
- (id)bundle;
- (void)setPrefix:;
- (id)prefix;
- (void).cxx_destruct;
- (id)description;
- (void)setBundle:;
- (id)initWithURLString:;
- (id)dynamic;
- (void)setDynamic:;
- (void)setSwitches:;
- (id)switches;
@end
