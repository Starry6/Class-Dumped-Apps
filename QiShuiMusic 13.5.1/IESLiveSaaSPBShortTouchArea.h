@interface IESLiveSaaSPBShortTouchArea : GPBMessage
@property (nonatomic) NSNumber currentTime;
@property (nonatomic) NSInteger type;
@property (nonatomic) I priority;
@property (nonatomic) q minWebcastSdkVersion;
@property (nonatomic) NSInteger shortTouchType;
@property (nonatomic) IESLiveSaaSPBShortTouchInfo shortTouchInfo;
@property (nonatomic) BOOL hasShortTouchInfo;
@property (nonatomic) IESLiveSaaSPBShortTouchBigCard shortTouchBigCard;
@property (nonatomic) BOOL hasShortTouchBigCard;
@property (nonatomic) NSString containerPayload;
@property (nonatomic) NSInteger loadType;
@property (nonatomic) NSString name;
- (void)setCurrentTime:;
- (id)dictionary;
- (id)currentTime;
+ (id)descriptor;
@end
