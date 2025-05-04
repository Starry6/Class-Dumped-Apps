@interface AWESearchTabConfig : NSObject
@property (nonatomic) NSString placeholder;
@property (nonatomic) NSString tabViewName;
@property (nonatomic) NSString tabKey;
@property (nonatomic) Q tabType;
- (unsigned long long)tabType;
- (void)setTabType:;
- (void)setTabKey:;
- (void)setTabViewName:;
- (id)tabViewName;
- (id)searchTabMultiLanguageName:;
- (void)setPlaceholder:;
- (id)placeholder;
- (void).cxx_destruct;
- (id)tabKey;
+ (BOOL)enableSearchTabConfigOpt;
+ (unsigned long long)tabTypeWithTabKey:;
+ (id)tabKeyWithTabType:;
+ (unsigned long long)searchTabTypeWithString:;
@end
