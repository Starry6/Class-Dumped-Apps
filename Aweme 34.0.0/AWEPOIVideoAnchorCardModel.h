@interface AWEPOIVideoAnchorCardModel : NSObject
@property (nonatomic) NSDictionary cardInfo;
@property (nonatomic) NSDictionary logExtraInfo;
@property (nonatomic) NSDictionary cardConfig;
@property (nonatomic) double dataTimeInterval;
- (id)logExtraInfo;
- (void)setCardConfig:;
- (id)cardConfig;
- (void)setLogExtraInfo:;
- (double)dataTimeInterval;
- (void)setDataTimeInterval:;
- (void).cxx_destruct;
- (id)cardInfo;
- (void)setCardInfo:;
@end
