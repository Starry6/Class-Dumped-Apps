@interface HTSLiveShortTouchArea : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) I priority;
@property (nonatomic) q minWebcastSdkVersion;
@property (nonatomic) NSInteger shortTouchType;
@property (nonatomic) HTSLiveShortTouchInfo shortTouchInfo;
@property (nonatomic) BOOL hasShortTouchInfo;
@property (nonatomic) HTSLiveShortTouchBigCard shortTouchBigCard;
@property (nonatomic) BOOL hasShortTouchBigCard;
@property (nonatomic) NSString containerPayload;
@property (nonatomic) NSInteger loadType;
@property (nonatomic) HTSLiveShortTouchBubble bubbleParams;
@property (nonatomic) BOOL hasBubbleParams;
@property (nonatomic) NSString name;
+ (id)descriptor;
@end
