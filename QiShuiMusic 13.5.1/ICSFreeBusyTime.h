@interface ICSFreeBusyTime : ICSProperty
@property (nonatomic) Q fbtype;
- (id)initWithPeriod:;
- (unsigned long long)fbtype;
- (void)setFbtype:;
@end
