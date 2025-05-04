@interface AWEBDPGetRankDataRespModel : NSObject
@property (nonatomic) Q pageNum;
@property (nonatomic) Q totalNum;
@property (nonatomic) AWEBDPRankListSelfItemModel selfItem;
@property (nonatomic) AWEBDPSelfUserInfoModel selfUserInfo;
@property (nonatomic) NSArray items;
- (unsigned long long)totalNum;
- (void)setTotalNum:;
- (void)setPageNum:;
- (unsigned long long)pageNum;
- (id)selfUserInfo;
- (void)setSelfUserInfo:;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
- (id)selfItem;
- (void)setSelfItem:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
