@interface AWEGuestTabItemConfig : NSObject
@property (nonatomic) NSString tabID;
@property (nonatomic) # tabContainerClass;
@property (nonatomic) IESSegmentedItem segmentedItem;
- (void)setTabID:;
- (Class)tabContainerClass;
- (id)segmentedItem;
- (void)setTabContainerClass:;
- (void)setSegmentedItem:;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)tabID;
@end
