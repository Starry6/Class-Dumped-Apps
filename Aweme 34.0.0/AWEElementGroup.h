@interface AWEElementGroup : NSObject
@property (nonatomic) NSArray elements;
@property (nonatomic) q originSortIndex;
@property (nonatomic) AWEElementGroupLayoutConfig layoutConfig;
@property (nonatomic) AWEHorizontalElement horizontalElement;
- (void)setLayoutConfig:;
- (long long)originSortIndex;
- (void)setOriginSortIndex:;
- (id)horizontalElement;
- (void)setHorizontalElement:;
- (id)elements;
- (void).cxx_destruct;
- (void)setElements:;
- (id)initWithElements:;
- (id)layoutConfig;
@end
