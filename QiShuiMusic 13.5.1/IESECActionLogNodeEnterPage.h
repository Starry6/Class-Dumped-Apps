@interface IESECActionLogNodeEnterPage : IESECActionLogNodeBase
@property (nonatomic) NSDictionary queryInfo;
@property (nonatomic) NSString pageName;
@property (nonatomic) NSDictionary entranceInfo;
- (id)entranceInfo;
- (id)queryInfo;
- (void)setEntranceInfo:;
- (void)setQueryInfo:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)info;
- (id)copyWithZone:;
- (void)setPageName:;
- (id)pageName;
@end
