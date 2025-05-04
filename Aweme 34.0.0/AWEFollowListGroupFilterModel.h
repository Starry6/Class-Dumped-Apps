@interface AWEFollowListGroupFilterModel : AWEBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) q type;
@property (nonatomic) BOOL isSelected;
- (void)setIsSelected:;
- (BOOL)isSelected;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end
