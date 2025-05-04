@interface AWESearchGSInfoModel : AWEBaseApiModel
@property (nonatomic) NSArray witdthArray;
@property (nonatomic) NSNumber leftMargin;
@property (nonatomic) NSNumber rightMargin;
@property (nonatomic) NSNumber topMargin;
@property (nonatomic) NSNumber bottomMargin;
@property (nonatomic) BOOL activityCardBottom;
@property (nonatomic) BOOL hideShadow;
- (id)witdthArray;
- (void)setWitdthArray:;
- (BOOL)activityCardBottom;
- (void)setActivityCardBottom:;
- (BOOL)hideShadow;
- (void)setHideShadow:;
- (id)leftMargin;
- (void)setLeftMargin:;
- (id)bottomMargin;
- (void).cxx_destruct;
- (id)rightMargin;
- (id)topMargin;
- (void)setRightMargin:;
- (void)setBottomMargin:;
- (void)setTopMargin:;
+ (id)JSONKeyPathsByPropertyKey;
@end
