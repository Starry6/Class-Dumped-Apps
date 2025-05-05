@interface IESLiveSaaSPBRoomBottomMessage : GPBMessage
@property (nonatomic) NSString content;
@property (nonatomic) NSString contentColor;
@property (nonatomic) NSString customArrowImageName;
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString color;
@property (nonatomic) NSString actionContent;
@property (nonatomic) q actionType;
@property (nonatomic) q pushMessageDisplayTime;
@property (nonatomic) IESLiveSaaSPBImage actionIcon;
@property (nonatomic) BOOL hasActionIcon;
@property (nonatomic) IESLiveSaaSPBFlexImageStruct newBackgroundImage;
@property (nonatomic) BOOL hasNewBackgroundImage;
@property (nonatomic) NSString source;
- (id)customArrowImageName;
- (void)setCustomArrowImageName:;
- (id)content;
- (void)setContent:;
- (void)setContentColor:;
- (id)contentColor;
+ (id)descriptor;
@end
