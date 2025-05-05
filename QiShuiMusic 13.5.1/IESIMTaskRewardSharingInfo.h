@interface IESIMTaskRewardSharingInfo : IESIMBaseApiModel
@property (nonatomic) q sharedPercentage;
@property (nonatomic) NSString descriptionString;
- (void)setSharedPercentage:;
- (long long)sharedPercentage;
- (void)setDescriptionString:;
- (id)descriptionString;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
