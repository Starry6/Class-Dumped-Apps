@interface IESLiveSaaSPBControlMessage_Extra : GPBMessage
@property (nonatomic) NSString banInfoURL;
@property (nonatomic) q reasonNo;
@property (nonatomic) IESLiveSaaSPBText title;
@property (nonatomic) BOOL hasTitle;
@property (nonatomic) IESLiveSaaSPBText violationReason;
@property (nonatomic) BOOL hasViolationReason;
@property (nonatomic) IESLiveSaaSPBText content;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) NSString source;
@property (nonatomic) IESLiveSaaSPBText gotItButton;
@property (nonatomic) BOOL hasGotItButton;
@property (nonatomic) IESLiveSaaSPBText banDetailButton;
@property (nonatomic) BOOL hasBanDetailButton;
+ (id)descriptor;
@end
