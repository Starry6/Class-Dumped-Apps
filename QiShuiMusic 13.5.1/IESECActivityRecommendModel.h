@interface IESECActivityRecommendModel : MTLModel
@property (nonatomic) NSString activityID;
@property (nonatomic) IESECURLModel coverImage;
@property (nonatomic) NSString activityURLString;
@property (nonatomic) NSString activityName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)activityURLString;
- (void)setActivityURLString:;
- (void)setCoverImage:;
- (void).cxx_destruct;
- (id)activityID;
- (id)coverImage;
- (id)activityName;
- (void)setActivityID:;
- (void)setActivityName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
