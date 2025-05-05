@interface HTSLiveExpandToolbarItem : HTSLiveToolbarItem
@property (nonatomic) NSString expandTitle;
@property (nonatomic) NSArray expandItems;
@property (nonatomic) NSArray highLightItems;
@property (nonatomic) BOOL expandable;
@property (nonatomic) @? canExpand;
@property (nonatomic) @? expandItemCanTapped;
@property (nonatomic) @? expandItemShowed;
- (BOOL)containItem:;
- (id)expandItemCanTapped;
- (id)expandItemShowed;
- (void)setExpandItemCanTapped:;
- (void)setExpandItemShowed:;
- (id)init;
- (void).cxx_destruct;
- (id)canExpand;
- (void)setCanExpand:;
@end
