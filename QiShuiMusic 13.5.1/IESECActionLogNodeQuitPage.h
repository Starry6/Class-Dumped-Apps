@interface IESECActionLogNodeQuitPage : IESECActionLogNodeBase
@property (nonatomic) NSString pageName;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)info;
- (id)copyWithZone:;
- (void)setPageName:;
- (id)pageName;
@end
