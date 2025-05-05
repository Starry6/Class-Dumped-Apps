@interface CNUIContainerContext : NSObject
@property (nonatomic) NSDictionary originalContainers;
@property (nonatomic) NSArray selectedContainers;
@property (nonatomic) NSArray addedContainers;
@property (nonatomic) NSDictionary removedContainers;
- (void).cxx_destruct;
- (id)initWithContainers:;
- (void)addContainer:;
- (void)removeContainer:;
- (id)persistedContainers;
- (id)addedContainers;
- (id)removedContainers;
- (void)resetToInitialState;
- (id)originalContainers;
- (void)setOriginalContainers:;
- (id)selectedContainers;
- (void)setSelectedContainers:;
@end
