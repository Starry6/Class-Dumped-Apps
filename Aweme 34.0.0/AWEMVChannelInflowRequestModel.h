@interface AWEMVChannelInflowRequestModel : NSObject
@property (nonatomic) Q cardType;
@property (nonatomic) q horizontalType;
@property (nonatomic) q awemeType;
@property (nonatomic) NSString videoType;
@property (nonatomic) NSString recallReasonType;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSNumber inflowRecallType;
- (long long)awemeType;
- (void)setAwemeType:;
- (long long)horizontalType;
- (void)setHorizontalType:;
- (id)recallReasonType;
- (void)setRecallReasonType:;
- (id)inflowRecallType;
- (void)setInflowRecallType:;
- (id)itemID;
- (void)setItemID:;
- (id)videoType;
- (void).cxx_destruct;
- (void)setVideoType:;
- (unsigned long long)cardType;
- (void)setCardType:;
@end
