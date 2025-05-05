@interface IESECUpdatedCampaignInfo : GPBMessage
@property (nonatomic) BOOL isValid;
@property (nonatomic) NSString label;
@property (nonatomic) NSString price;
@property (nonatomic) NSString pic;
@property (nonatomic) NSString startTime;
@property (nonatomic) NSString endTime;
@property (nonatomic) NSString timeStartLabel;
@property (nonatomic) NSString timeEndLabel;
@property (nonatomic) NSString userLimit;
@property (nonatomic) NSString isPreheat;
@property (nonatomic) NSString campaignId;
+ (id)descriptor;
@end
