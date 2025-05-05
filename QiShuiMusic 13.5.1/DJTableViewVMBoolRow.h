@interface DJTableViewVMBoolRow : DJTableViewVMRow
@property (nonatomic) BOOL value;
@property (nonatomic) @? valueChangeBlock;
- (id)initWithTitle:value:valueChangeHander:;
- (void)setValueChangeBlock:;
- (id)valueChangeBlock;
- (void)setValue:;
- (void).cxx_destruct;
- (BOOL)value;
@end
