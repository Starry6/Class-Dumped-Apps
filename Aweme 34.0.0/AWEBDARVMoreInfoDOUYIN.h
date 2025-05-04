@interface AWEBDARVMoreInfoDOUYIN : NSObject
@property (nonatomic) NSString token;
@property (nonatomic) BOOL nextAdExist;
@property (nonatomic) q glodCount;
@property (nonatomic) NSString goldCountUnit;
@property (nonatomic) NSString incentiveAdFrom;
@property (nonatomic) NSString reIncentiveAdFrom;
- (id)initWithDic:;
- (BOOL)nextAdExist;
- (id)reIncentiveAdFrom;
- (id)incentiveAdFrom;
- (long long)glodCount;
- (id)goldCountUnit;
- (void)setNextAdExist:;
- (void)setGlodCount:;
- (void)setGoldCountUnit:;
- (void)setIncentiveAdFrom:;
- (void)setReIncentiveAdFrom:;
- (void).cxx_destruct;
- (void)setToken:;
- (id)token;
@end
