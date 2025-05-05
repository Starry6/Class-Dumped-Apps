@interface IESECGoodsAuctionHistoryModel : MTLModel
@property (nonatomic) NSString userName;
@property (nonatomic) NSString userAvatarURL;
@property (nonatomic) NSNumber price;
@property (nonatomic) NSString recordTime;
@property (nonatomic) NSString statusText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)recordTime;
- (void)setRecordTime:;
- (void)setUserAvatarURL:;
- (id)userAvatarURL;
- (id)statusText;
- (id)userName;
- (void)setUserName:;
- (void).cxx_destruct;
- (id)price;
- (void)setPrice:;
- (void)setStatusText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
