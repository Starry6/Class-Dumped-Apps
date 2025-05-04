@interface AWEAwemeGlobalDuplicateManager : NSObject
@property (nonatomic) NSMutableDictionary awemeInfos;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeInfos;
- (void)setAwemeInfos:;
- (BOOL)isValidModel:;
- (void)trackWithAweme:fromType:;
- (BOOL)shouldFilterAweme:fromType:;
- (void)addAmeme:enterfrom:;
- (id)filterDuplicatedDatasource:fromIndex:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (unsigned long long)duplicateType;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
