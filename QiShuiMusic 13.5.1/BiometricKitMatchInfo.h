@interface BiometricKitMatchInfo : NSObject
@property (nonatomic) NSArray topology;
@property (nonatomic) NSDictionary details;
- (void)setDetails:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)details;
- (id)topology;
- (void)setTopology:;
@end
