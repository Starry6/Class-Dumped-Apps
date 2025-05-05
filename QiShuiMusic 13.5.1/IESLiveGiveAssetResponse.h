@interface IESLiveGiveAssetResponse : NSObject
@property (nonatomic) NSNumber assetID;
@property (nonatomic) NSNumber giftID;
@property (nonatomic) Q count;
@property (nonatomic) NSNumber unitPrice;
@property (nonatomic) HTSLiveUser toUser;
@property (nonatomic) HTSLiveUser sugarDaddy;
@property (nonatomic) PropConsumeResult_Data propConsumeResultData;
- (id)giftID;
- (id)propConsumeResultData;
- (void)setGiftID:;
- (void)setPropConsumeResultData:;
- (void)setSugarDaddy:;
- (void)setToUser:;
- (id)sugarDaddy;
- (void)setCount:;
- (void).cxx_destruct;
- (void)setAssetID:;
- (unsigned long long)count;
- (id)assetID;
- (id)toUser;
- (id)unitPrice;
- (void)setUnitPrice:;
@end
