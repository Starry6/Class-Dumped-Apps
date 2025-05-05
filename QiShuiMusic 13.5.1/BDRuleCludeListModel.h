@interface BDRuleCludeListModel : NSObject
@property (nonatomic) NSString ruleKey;
@property (nonatomic) NSDictionary includeLists;
@property (nonatomic) NSDictionary excludeLists;
- (id)ruleKey;
- (id)excludeLists;
- (id)includeLists;
- (BOOL)shouldFilterWithParams:withRule:;
- (void).cxx_destruct;
- (id)initWithDictionary:key:;
@end
