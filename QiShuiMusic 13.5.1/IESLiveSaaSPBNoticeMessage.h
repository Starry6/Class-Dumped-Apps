@interface IESLiveSaaSPBNoticeMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString content;
@property (nonatomic) q noticeType;
@property (nonatomic) NSString style;
@property (nonatomic) IESLiveSaaSPBText title;
@property (nonatomic) BOOL hasTitle;
@property (nonatomic) IESLiveSaaSPBText violationReason;
@property (nonatomic) BOOL hasViolationReason;
@property (nonatomic) IESLiveSaaSPBText displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) IESLiveSaaSPBText tipsTitle;
@property (nonatomic) BOOL hasTipsTitle;
@property (nonatomic) NSString tipsURL;
@property (nonatomic) IESLiveSaaSPBText noticeTitle;
@property (nonatomic) BOOL hasNoticeTitle;
@property (nonatomic) IESLiveSaaSPBText noticeContent;
@property (nonatomic) BOOL hasNoticeContent;
@property (nonatomic) NSString eventName;
@property (nonatomic) q noticeTime;
@property (nonatomic) NSString limitNoticeKey;
+ (id)descriptor;
@end
