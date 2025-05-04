@interface AWECombineBinding : AWEBinding
@property (nonatomic) NSPointerArray subBindingArray;
- (id)subBindingArray;
- (void)setSubBindingArray:;
- (id)init;
- (void)unbind;
- (void).cxx_destruct;
- (void)addHandler:;
@end
