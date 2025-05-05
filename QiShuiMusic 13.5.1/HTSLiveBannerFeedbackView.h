@interface HTSLiveBannerFeedbackView : IESLivePBBaseMessage
@property (nonatomic) NSString component;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) BOOL isKeepLast;
@property (nonatomic) NSString uniqueId;
@property (nonatomic) HTSLiveFeedbackProps feedbackProps;
@property (nonatomic) BOOL hasFeedbackProps;
+ (id)descriptor;
@end
