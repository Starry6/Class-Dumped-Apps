@interface AWEIMGroupJoinPanelItemViewModel : NSObject
@property (nonatomic) # associateViewClass;
@property (nonatomic) Q itemType;
@property (nonatomic) UIColor itemBgColor;
@property (nonatomic) double itemHeight;
- (id)itemBgColor;
- (void)setItemBgColor:;
- (void)setAssociateViewClass:;
- (Class)associateViewClass;
- (unsigned long long)itemType;
- (void)setItemType:;
- (id)init;
- (void).cxx_destruct;
- (double)itemHeight;
- (void)setItemHeight:;
@end
