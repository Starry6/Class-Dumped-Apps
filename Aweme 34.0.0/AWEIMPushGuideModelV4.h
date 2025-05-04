@interface AWEIMPushGuideModelV4 : MTLModel
@property (nonatomic) NSString selectionTitle;
@property (nonatomic) NSArray selections;
@property (nonatomic) NSString groupID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setGroupID:;
- (id)groupID;
- (void).cxx_destruct;
- (void)setSelectionTitle:;
- (id)selectionTitle;
- (id)selections;
- (void)setSelections:;
+ (id)selectionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
