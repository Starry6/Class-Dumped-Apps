@interface IESECWinFeedEnterParameters : NSObject
@property (nonatomic) NSString customIDs;
@property (nonatomic) NSString promotionID;
@property (nonatomic) Q feedType;
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserId;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSDictionary extraDict;
@property (nonatomic) NSString passThroughAPI;
@property (nonatomic) NSDictionary entranceInfo;
@property (nonatomic) NSString sourceBtmToken;
- (void)setPromotionID:;
- (id)customIDs;
- (id)enterFrom;
- (id)entranceInfo;
- (id)extraDict;
- (id)passThroughAPI;
- (id)promotionID;
- (id)secUserId;
- (void)setCustomIDs:;
- (void)setEnterFrom:;
- (void)setEntranceInfo:;
- (void)setExtraDict:;
- (void)setPassThroughAPI:;
- (void)setSecUserId:;
- (void)setSourceBtmToken:;
- (id)sourceBtmToken;
- (unsigned long long)feedType;
- (id)userID;
- (void)setFeedType:;
- (void).cxx_destruct;
- (void)setUserID:;
@end
