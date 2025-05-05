@interface IESLiveFPSReportConfig : NSObject
@property (nonatomic) q interval;
- (id)toDic;
- (void)setInterval:;
- (long long)interval;
- (id)copyWithZone:;
@end
