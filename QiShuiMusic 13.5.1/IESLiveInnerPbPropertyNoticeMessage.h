@interface IESLiveInnerPbPropertyNoticeMessage : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString content;
@property (nonatomic) q userId;
@property (nonatomic) q propertyEventType;
+ (id)descriptor;
@end
