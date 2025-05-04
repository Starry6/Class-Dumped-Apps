@interface AWEUserRelationshowFollowButtonModel : AWEBaseApiModel
@property (nonatomic) BOOL showButton;
@property (nonatomic) q showTag;
- (long long)showTag;
- (void)setShowTag:;
- (void)setShowButton:;
- (BOOL)showButton;
+ (id)showTagJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
