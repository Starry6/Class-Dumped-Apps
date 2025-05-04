@interface AWEInnerPushExitRule : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) Q actionType;
@property (nonatomic) q actionCount;
@property (nonatomic) double hiddenPeriod;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)hiddenPeriod;
- (void)setHiddenPeriod:;
- (unsigned long long)actionType;
- (void)setActionType:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (long long)actionCount;
- (void)setActionCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
