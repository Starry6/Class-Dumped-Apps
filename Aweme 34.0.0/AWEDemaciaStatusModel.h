@interface AWEDemaciaStatusModel : AWEBaseApiModel
@property (nonatomic) Q privacyType;
@property (nonatomic) BOOL isPrivate;
@property (nonatomic) BOOL isFriendVisible;
- (BOOL)isFriendVisible;
- (unsigned long long)privacyType;
- (void)setPrivacyType:;
- (BOOL)isPrivate;
- (id)init;
+ (id)JSONKeyPathsByPropertyKey;
@end
