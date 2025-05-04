@interface AWEBDPRankListSelfItemModel : NSObject
@property (nonatomic) NSNumber rank;
@property (nonatomic) NSNumber privateSetting;
@property (nonatomic) AWEBDPRankListItemModel item;
- (id)privateSetting;
- (BOOL)needHideSelfItem;
- (void)setPrivateSetting:;
- (id)rank;
- (void)setItem:;
- (id)item;
- (void)setRank:;
- (void).cxx_destruct;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
