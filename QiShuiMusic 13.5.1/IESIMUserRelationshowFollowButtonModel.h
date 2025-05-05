@interface IESIMUserRelationshowFollowButtonModel : IESIMBaseApiModel
@property (nonatomic) BOOL showButton;
@property (nonatomic) q showTag;
- (long long)showTag;
- (void)setShowTag:;
- (BOOL)showButton;
- (void)setShowButton:;
+ (id)JSONKeyPathsByPropertyKey;
@end
