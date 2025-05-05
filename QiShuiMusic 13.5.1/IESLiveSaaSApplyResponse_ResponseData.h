@interface IESLiveSaaSApplyResponse_ResponseData : GPBMessage
@property (nonatomic) NSString prompts;
@property (nonatomic) NSInteger vendor;
@property (nonatomic) NSString linkmicIdStr;
@property (nonatomic) BOOL autoJoin;
@property (nonatomic) q waitingListOffset;
@property (nonatomic) NSInteger silenceStatus;
@property (nonatomic) IESLiveSaaSPBText fastMatchDisplayText;
@property (nonatomic) BOOL hasFastMatchDisplayText;
@property (nonatomic) NSInteger linkType;
+ (id)descriptor;
@end
