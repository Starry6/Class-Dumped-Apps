@interface AWELifeFeedsFeedbackConfig : AWEBaseApiModel
@property (nonatomic) NSString scene;
@property (nonatomic) NSString lynxUrl;
@property (nonatomic) NSArray feedbackOptions;
- (id)lynxUrl;
- (void)setLynxUrl:;
- (void)setFeedbackOptions:;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
- (id)feedbackOptions;
+ (id)createFeedBackConfigWithData:;
@end
