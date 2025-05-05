@interface MISProfile : NSObject
@property (nonatomic) NSInteger flavor;
@property (nonatomic) NSMutableDictionary payload;
@property (nonatomic) NSDictionary entitlements;
@property (nonatomic) NSArray certs;
@property (nonatomic) ^{CEQueryContext=} derEntitlements;
@property (nonatomic) NSString uuid;
- (id)entitlements;
- (id)payload;
- (id)init;
- (void)setEntitlements:;
- (void)dealloc;
- (void)setPayload:;
- (id)uuid;
- (void).cxx_destruct;
- (int)flavor;
- (id)certs;
- (void)setCerts:;
- (void)setFlavor:;
- (id)derEntitlements;
- (int)fixUp;
@end
