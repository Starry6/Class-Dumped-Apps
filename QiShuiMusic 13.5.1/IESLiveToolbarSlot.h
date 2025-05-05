@interface IESLiveToolbarSlot : NSObject
@property (nonatomic) NSString slotName;
@property (nonatomic) NSArray items;
@property (nonatomic) Q priority;
@property (nonatomic) NSString expandItem;
@property (nonatomic) NSArray firstPatternItem;
@property (nonatomic) NSArray secondPatternItem;
@property (nonatomic) NSArray thirdPatternItem;
- (BOOL)compareItemIndexWith:biggerOrEqualThanItem:;
- (id)expandItem;
- (id)firstPatternItem;
- (id)secondPatternItem;
- (void)setExpandItem:;
- (void)setFirstPatternItem:;
- (void)setSecondPatternItem:;
- (void)setSlotName:;
- (void)setThirdPatternItem:;
- (id)thirdPatternItem;
- (void)setPriority:;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
- (id)slotName;
- (unsigned long long)priority;
- (unsigned long long)indexForItem:;
+ (id)instanceWithDict:;
@end
