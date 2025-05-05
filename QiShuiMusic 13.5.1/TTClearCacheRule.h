@interface TTClearCacheRule : JSONModel
@property (nonatomic) NSString clearId;
@property (nonatomic) q clearRuleStatus;
@property (nonatomic) q type;
@property (nonatomic) BOOL isTncSet;
@property (nonatomic) NSArray keyList;
- (id)clearId;
- (long long)clearRuleStatus;
- (BOOL)isTncSet;
- (void)setClearId:;
- (void)setClearRuleStatus:;
- (void)setIsTncSet:;
- (void)setKeyList:;
- (id)init;
- (void)dealloc;
- (id)keyList;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
+ (BOOL)propertyIsOptional:;
@end
