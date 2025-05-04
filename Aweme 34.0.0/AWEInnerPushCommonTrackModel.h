@interface AWEInnerPushCommonTrackModel : NSObject
@property (nonatomic) NSString chatType;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString pushType;
@property (nonatomic) NSNumber ruleId;
@property (nonatomic) NSDictionary payloadDict;
@property (nonatomic) BOOL isRecommendedByServer;
@property (nonatomic) NSDictionary extraParams;
- (void)setEnterFrom:;
- (void)setExtraParams:;
- (id)enterFrom;
- (id)extraParams;
- (id)chatType;
- (void)setChatType:;
- (id)payloadDict;
- (void)setPayloadDict:;
- (void)setIsRecommendedByServer:;
- (BOOL)isRecommendedByServer;
- (void)setPushType:;
- (id)pushType;
- (void).cxx_destruct;
- (id)ruleId;
- (void)setRuleId:;
@end
