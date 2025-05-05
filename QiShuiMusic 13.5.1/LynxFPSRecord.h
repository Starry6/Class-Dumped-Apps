@interface LynxFPSRecord : NSObject
@property (nonatomic) C state;
@property (nonatomic) <NSCopying> key;
@property (nonatomic) NSString name;
@property (nonatomic) Q frames;
@property (nonatomic) double duration;
@property (nonatomic) double framesPerSecond;
@property (nonatomic) {?=IdIdIdIdIdd} metrics;
@property (nonatomic) {?=dddddddddd} derivedMetrics;
- (id)derivedMetrics;
- (void)setTimeout:completion:;
- (id)metrics;
- (id)key;
- (unsigned char)state;
- (void).cxx_destruct;
- (id)initWithKey:;
- (void)reset;
- (id)description;
- (id)name;
- (unsigned long long)frames;
- (double)duration;
- (id)copyWithZone:;
- (double)framesPerSecond;
@end
