@interface AWEVideoTagsPriorityManager : NSObject
@property (nonatomic) NSMutableArray components;
@property (nonatomic) NSArray activedComponents;
@property (nonatomic) UIView placeHolderView;
- (void)updateWithData:context:;
- (id)activedComponents;
- (BOOL)isTagChapter:;
- (BOOL)isTagCoCreatorTag:;
- (id)initWithSourceElement:;
- (void)setActivedComponents:;
- (BOOL)canShowPlaceHolderWithModel:;
- (void)setComponents:;
- (void).cxx_destruct;
- (id)components;
- (id)placeHolderView;
- (void)setPlaceHolderView:;
+ (BOOL)needShowWithContext:;
+ (id)componentsPriorities;
+ (id)changeChapterTagPriority:;
@end
