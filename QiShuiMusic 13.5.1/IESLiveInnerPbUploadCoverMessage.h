@interface IESLiveInnerPbUploadCoverMessage : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q msgType;
@property (nonatomic) HTSLiveText title;
@property (nonatomic) BOOL hasTitle;
@property (nonatomic) HTSLiveText content;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) HTSLiveText tipsTitle;
@property (nonatomic) BOOL hasTipsTitle;
@property (nonatomic) NSString tipsURL;
+ (id)descriptor;
@end
