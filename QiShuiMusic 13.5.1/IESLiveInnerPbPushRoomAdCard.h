@interface IESLiveInnerPbPushRoomAdCard : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString actionContent;
@property (nonatomic) NSString content;
@property (nonatomic) q targetNum;
@property (nonatomic) q showNum;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) NSInteger adcardType;
@property (nonatomic) NSInteger hotvalue;
- (long long)actionType;
+ (id)descriptor;
@end
