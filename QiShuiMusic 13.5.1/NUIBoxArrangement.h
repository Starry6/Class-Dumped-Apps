@interface NUIBoxArrangement : NSObject
@property (nonatomic) <NUIArrangementContainer> container;
@property (nonatomic) <NUIBoxArrangementDataSource> dataSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reloadData;
- (void)dealloc;
- (id)container;
- (id)dataSource;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)contentLayoutSizeFittingSize:forArrangedSubview:;
- (id)layoutFrameForArrangedSubview:withProposedContentFrame:;
- (void)populateBoxArrangementCells:;
- (id)initWithContainer:dataSource:;
- (id)layoutSizeFittingSize:;
- (void)positionItemsInBounds:block:;
@end
