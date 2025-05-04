@interface AWEHPProfileSideBarManagerContext : NSObject
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString entranceStatus;
@property (nonatomic) double enterTime;
@property (nonatomic) q clickOrder;
@property (nonatomic) BOOL hasSlide;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterFrom;
- (long long)clickOrder;
- (void)setClickOrder:;
- (id)entranceStatus;
- (void)setEntranceStatus:;
- (BOOL)hasSlide;
- (void)setHasSlide:;
- (id)initWithEnterMethod:;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (double)enterTime;
- (void)setEnterTime:;
@end
