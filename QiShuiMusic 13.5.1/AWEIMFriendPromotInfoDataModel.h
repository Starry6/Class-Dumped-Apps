@interface AWEIMFriendPromotInfoDataModel : NSObject
@property (nonatomic) NSString promotID;
@property (nonatomic) AWEIMFriendSubInfoDataModel promotInfo;
- (id)promotID;
- (id)promotInfo;
- (void)setPromotID:;
- (void)setPromotInfo:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
@end
