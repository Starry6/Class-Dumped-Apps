@interface IESIMAFDFamiliarActivityModel : IESIMBaseApiModel
@property (nonatomic) NSString activityID;
@property (nonatomic) BOOL shouldShowActivityBtn;
@property (nonatomic) NSString schemaUrl;
@property (nonatomic) NSString followText;
@property (nonatomic) NSString followedText;
@property (nonatomic) double endTime;
@property (nonatomic) NSString followedToast;
- (id)followText;
- (id)followedText;
- (id)followedToast;
- (id)schemaUrl;
- (void)setFollowText:;
- (void)setFollowedText:;
- (void)setFollowedToast:;
- (void)setSchemaUrl:;
- (void)setShouldShowActivityBtn:;
- (BOOL)shouldShowActivityBtn;
- (void)setEndTime:;
- (double)endTime;
- (void).cxx_destruct;
- (id)activityID;
- (void)setActivityID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
