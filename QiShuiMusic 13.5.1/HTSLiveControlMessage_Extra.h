@interface HTSLiveControlMessage_Extra : IESLivePBBaseMessage
@property (nonatomic) NSString banInfoURL;
@property (nonatomic) q reasonNo;
@property (nonatomic) HTSLiveText title;
@property (nonatomic) BOOL hasTitle;
@property (nonatomic) HTSLiveText violationReason;
@property (nonatomic) BOOL hasViolationReason;
@property (nonatomic) HTSLiveText content;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) NSString source;
@property (nonatomic) HTSLiveText gotItButton;
@property (nonatomic) BOOL hasGotItButton;
@property (nonatomic) HTSLiveText banDetailButton;
@property (nonatomic) BOOL hasBanDetailButton;
+ (id)descriptor;
@end
