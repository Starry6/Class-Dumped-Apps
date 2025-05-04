@interface AWECommentFunctionModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) UIImage icon;
@property (nonatomic) NSValue iconSize;
@property (nonatomic) @? actionBlock;
@property (nonatomic) NSString featureName;
@property (nonatomic) q functionType;
@property (nonatomic) BOOL shouldShowYellowDot;
@property (nonatomic) BOOL needBackgroundColor;
- (void)setNeedBackgroundColor:;
- (BOOL)needBackgroundColor;
- (BOOL)shouldShowYellowDot;
- (void)setShouldShowYellowDot:;
- (long long)functionType;
- (id)icon;
- (void)setIconSize:;
- (id)featureName;
- (id)iconSize;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (void)setFeatureName:;
- (void)setTitle:;
- (void)setActionBlock:;
- (id)actionBlock;
- (void)setFunctionType:;
@end
