@interface AWELifeShelfCardTabListItem : MTLModel
@property (nonatomic) q tabId;
@property (nonatomic) NSString tabName;
@property (nonatomic) NSString tabNameEn;
@property (nonatomic) NSArray cardList;
@property (nonatomic) NSString emptyTip;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cardList;
- (void)setCardList:;
- (id)emptyTip;
- (void)setTabNameEn:;
- (void)setEmptyTip:;
- (id)tabNameEn;
- (void).cxx_destruct;
- (id)tabName;
- (void)setTabName:;
- (void)setTabId:;
- (long long)tabId;
+ (id)JSONKeyPathsByPropertyKey;
@end
