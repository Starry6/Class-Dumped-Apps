@interface BisClientInfo : NSObject
@property (nonatomic) NSString model;
@property (nonatomic) NSString os;
@property (nonatomic) NSString osVer;
@property (nonatomic) NSString clientVer;
- (id)clientVer;
- (id)osVer;
- (void)setClientVer:;
- (void)setOsVer:;
- (id)os;
- (id)model;
- (void)setModel:;
- (void)setOs:;
- (void).cxx_destruct;
@end
