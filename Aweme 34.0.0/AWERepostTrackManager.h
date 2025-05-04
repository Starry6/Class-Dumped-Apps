@interface AWERepostTrackManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackReportCommentWithReportCommentConfig:;
+ (id)generateParamsWithAweme:fromAweme:pageType:enterFrom:enterMethod:;
+ (void)trackNewForwardWithAweme:params:;
+ (void)trackPostCommentWithPostCommentConfig:;
+ (void)trackRepostRequestWithRequestConfig:;
+ (void)trackRepostClickWithClickConfig:;
+ (void)trackInputWithAweme:fromAweme:pageType:enterFrom:stayTime:isEnter:;
+ (id)generateAttributesWithAweme:fromAweme:pageType:;
@end
