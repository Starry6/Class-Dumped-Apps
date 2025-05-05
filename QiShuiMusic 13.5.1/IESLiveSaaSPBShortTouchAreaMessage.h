@interface IESLiveSaaSPBShortTouchAreaMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger messageType;
@property (nonatomic) IESLiveSaaSPBShortTouchArea shortTouchAreaData;
@property (nonatomic) BOOL hasShortTouchAreaData;
+ (id)descriptor;
@end
