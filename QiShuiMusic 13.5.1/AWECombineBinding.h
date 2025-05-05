@interface AWECombineBinding : AWEBinding
@property (nonatomic) NSPointerArray subBindingArray;
- (id)subBindingArray;
- (void)setSubBindingArray:;
- (id)init;
- (void)addHandler:;
- (void).cxx_destruct;
- (void)unbind;
@end
