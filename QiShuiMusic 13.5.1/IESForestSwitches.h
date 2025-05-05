@interface IESForestSwitches : NSObject
@property (nonatomic) NSNumber enableStreamLoad;
@property (nonatomic) NSNumber enableHttpHeader;
@property (nonatomic) NSNumber enableLooseLimit;
@property (nonatomic) NSNumber enableFixCORS;
- (id)enableFixCORS;
- (id)enableHttpHeader;
- (id)enableLooseLimit;
- (id)enableStreamLoad;
- (void)setEnableFixCORS:;
- (void)setEnableHttpHeader:;
- (void)setEnableLooseLimit:;
- (void)setEnableStreamLoad:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
@end
