@interface AWEUserIdentifyModel : AWEBaseApiModel
@property (nonatomic) NSString iconURL;
@property (nonatomic) NSString text;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString action;
@property (nonatomic) NSString trackerParams;
@property (nonatomic) NSString accessibility;
- (void)setTrackerParams:;
- (id)trackerParams;
- (void)setIconURL:;
- (void)setAccessibility:;
- (id)iconURL;
- (void)setText:;
- (id)text;
- (void)setAction:;
- (void)setTextColor:;
- (id)action;
- (void).cxx_destruct;
- (id)textColor;
- (id)accessibility;
+ (id)JSONKeyPathsByPropertyKey;
@end
