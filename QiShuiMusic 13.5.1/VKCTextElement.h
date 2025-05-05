@interface VKCTextElement : VKCBaseElement
@property (nonatomic) NSArray _children;
@property (nonatomic) NSArray components;
@property (nonatomic) NSArray candidates;
@property (nonatomic) BOOL childrenCreated;
- (id)components;
- (void)setComponents:;
- (id)candidates;
- (void)setCandidates:;
- (id)children;
- (long long)elementType;
- (void).cxx_destruct;
- (id)_children;
- (BOOL)isInspectableCellSelectable;
- (void)createChildrenIfNecessary;
- (BOOL)childrenCreated;
- (void)setChildrenCreated:;
- (void)set_children:;
- (id)confidenceString;
- (id)crOutputRegionTypeString;
- (id)elementCollectionForQuad:;
+ (id)textElementFromCROutputRegion:parentDocument:;
@end
