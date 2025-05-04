@interface AWEEntertainmentVideoRightDetailModel : AWEBaseApiModel
@property (nonatomic) Q rightType;
@property (nonatomic) Q rightStatus;
- (unsigned long long)rightType;
- (void)setRightType:;
- (void)setRightStatus:;
- (unsigned long long)rightStatus;
+ (id)JSONKeyPathsByPropertyKey;
@end
