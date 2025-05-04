@interface AWEAwemeDistributeCircleModel : AWEBaseApiModel
@property (nonatomic) Q distributeType;
@property (nonatomic) BOOL shouldBlockInteraction;
@property (nonatomic) BOOL newSchoolStyleEnable;
- (unsigned long long)distributeType;
- (void)setDistributeType:;
- (BOOL)shouldBlockInteraction;
- (void)setShouldBlockInteraction:;
- (BOOL)newSchoolStyleEnable;
- (void)setNewSchoolStyleEnable:;
+ (id)JSONKeyPathsByPropertyKey;
@end
