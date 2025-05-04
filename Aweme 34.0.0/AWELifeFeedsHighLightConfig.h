@interface AWELifeFeedsHighLightConfig : NSObject
@property (nonatomic) q borderWidth;
@property (nonatomic) NSString borderColor;
@property (nonatomic) q forceCornerRadius;
@property (nonatomic) float showDuration;
@property (nonatomic) float stayHightDuration;
@property (nonatomic) float dismissDuration;
@property (nonatomic) @? showComplete;
@property (nonatomic) @? dismissComplete;
- (float)showDuration;
- (void)setShowDuration:;
- (long long)forceCornerRadius;
- (void)setForceCornerRadius:;
- (float)stayHightDuration;
- (void)setStayHightDuration:;
- (float)dismissDuration;
- (void)setDismissDuration:;
- (id)showComplete;
- (void)setShowComplete:;
- (id)dismissComplete;
- (void)setDismissComplete:;
- (void)setBorderColor:;
- (void)setBorderWidth:;
- (long long)borderWidth;
- (id)borderColor;
- (void).cxx_destruct;
+ (id)createHighLightConfigWithData:;
@end
