@interface IESECLLContainerBuilder : IESECLLLayoutableBuilder
@property (nonatomic) @? item;
@property (nonatomic) @? spacer;
@property (nonatomic) @? verticalGroup;
@property (nonatomic) @? horizontalGroup;
@property (nonatomic) @? stackGroup;
@property (nonatomic) @? text;
@property (nonatomic) @? rectangle;
- (id)horizontalGroup;
- (void)inflateSubviewsIntoMap:;
- (id)stackGroup;
- (id)verticalGroup;
- (id)item;
- (id)init;
- (void).cxx_destruct;
- (id)text;
- (id)rectangle;
- (id)spacer;
@end
