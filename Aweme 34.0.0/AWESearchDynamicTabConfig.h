@interface AWESearchDynamicTabConfig : AWEBaseApiModel
@property (nonatomic) NSString placeholder;
@property (nonatomic) NSString tabName;
@property (nonatomic) NSString tabType;
@property (nonatomic) NSString tabViewName;
@property (nonatomic) q tabNum;
- (id)tabType;
- (void)setTabType:;
- (void)setTabViewName:;
- (id)tabViewName;
- (long long)tabNum;
- (void)setTabNum:;
- (void)setPlaceholder:;
- (id)placeholder;
- (void).cxx_destruct;
- (id)tabName;
- (void)setTabName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
