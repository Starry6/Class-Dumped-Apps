@interface IESECGoodsDetailHeaderTabComponentData : IESECBaseApiModel
@property (nonatomic) NSArray tabs;
@property (nonatomic) q maxTabNum;
- (long long)maxTabNum;
- (BOOL)needFoldTabWhenSmallMode;
- (void)setMaxTabNum:;
- (id)tabs;
- (void).cxx_destruct;
- (void)setTabs:;
+ (id)tabsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
