@interface AWEIMMultiUserInteractNotificationCountModel : IESIMBaseApiModel
@property (nonatomic) q group;
@property (nonatomic) q count;
- (void)setCount:;
- (void)setGroup:;
- (long long)group;
- (long long)count;
+ (id)JSONKeyPathsByPropertyKey;
@end
