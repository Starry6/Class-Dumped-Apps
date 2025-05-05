@interface AMSFrozenBagValue : AMSBagValue
@property (nonatomic) <AMSBagDataSourceProtocol> dataSource;
- (void)setDataSource:;
- (id)dataSource;
- (void).cxx_destruct;
- (id)initWithKey:value:valueType:;
@end
