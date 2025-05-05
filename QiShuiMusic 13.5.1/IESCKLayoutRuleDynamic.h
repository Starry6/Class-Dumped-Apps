@interface IESCKLayoutRuleDynamic : IESCKLayoutBaseRule
@property (nonatomic) NSString viewType;
@property (nonatomic) NSString containerType;
- (id)initWithViewType:containerType:;
- (id)containerWithType:;
- (id)layoutView:;
- (id)viewType;
- (void).cxx_destruct;
- (id)containerType;
- (void)setContainerType:;
- (void)setViewType:;
@end
