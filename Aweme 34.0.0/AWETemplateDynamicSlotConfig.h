@interface AWETemplateDynamicSlotConfig : MTLModel
@property (nonatomic) Q minSegNum;
@property (nonatomic) Q maxSegNum;
@property (nonatomic) Q originalSegNum;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)minSegNum;
- (unsigned long long)maxSegNum;
- (unsigned long long)originalSegNum;
- (void)setOriginalSegNum:;
- (void)setMinSegNum:;
- (void)setMaxSegNum:;
- (id)init;
- (id)copyWithZone:;
+ (id)JSONKeyPathsByPropertyKey;
@end
