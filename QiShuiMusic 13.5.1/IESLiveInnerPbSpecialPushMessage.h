@interface IESLiveInnerPbSpecialPushMessage : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString content;
@property (nonatomic) NSString color;
@property (nonatomic) NSString traceid;
@property (nonatomic) IESLiveInnerPbImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString actionContent;
@property (nonatomic) q actionType;
@property (nonatomic) q pushMessageDisplayTime;
- (void)setRedEnvelope:;
- (id)redEnvelope;
- (void)setTreasure:;
- (id)treasure;
+ (id)descriptor;
@end
