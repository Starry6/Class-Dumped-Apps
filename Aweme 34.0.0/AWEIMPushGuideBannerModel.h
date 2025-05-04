@interface AWEIMPushGuideBannerModel : MTLModel
@property (nonatomic) NSString selectionTitle;
@property (nonatomic) NSArray selections;
@property (nonatomic) BOOL chatHasBackground;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setChatHasBackground:;
- (BOOL)chatHasBackground;
- (void).cxx_destruct;
- (void)setSelectionTitle:;
- (id)selectionTitle;
- (id)selections;
- (void)setSelections:;
+ (id)selectionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
