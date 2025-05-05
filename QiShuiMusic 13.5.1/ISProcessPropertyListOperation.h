@interface ISProcessPropertyListOperation : ISOperation
@property (nonatomic) ISPropertyListProvider dataProvider;
- (void)dealloc;
- (id)dataProvider;
- (void)setDataProvider:;
- (void)run;
- (id)initWithPropertyList:;
@end
