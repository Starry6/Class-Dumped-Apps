@interface IESLiveRoomProfileCarouselLabelModel : IESLiveDynamicModel
@property (nonatomic) NSString info;
@property (nonatomic) IESLiveSaaSAnchorTabLabel anchorTabLabel;
@property (nonatomic) NSString subInfo;
@property (nonatomic) NSString thirdInfo;
@property (nonatomic) UIFont font;
@property (nonatomic) UIColor textColor;
@property (nonatomic) BOOL canCarousel;
@property (nonatomic) @? carouselAction;
@property (nonatomic) @? trackAction;
@property (nonatomic) double carouselHeight;
@property (nonatomic) q infoType;
@property (nonatomic) q subInfoType;
@property (nonatomic) q thirdInfoType;
@property (nonatomic) BOOL needAccessibility;
@property (nonatomic) BOOL needMoveUpAccessibility;
@property (nonatomic) BOOL needReplaceAuthentication;
- (void)setTrackAction:;
- (id)carouselAction;
- (double)carouselHeight;
- (BOOL)needReplaceAuthentication;
- (void)setCarouselAction:;
- (void)setCarouselHeight:;
- (void)setNeedReplaceAuthentication:;
- (void)setThirdInfo:;
- (void)setThirdInfoType:;
- (id)thirdInfo;
- (long long)thirdInfoType;
- (id)trackAction;
- (void).cxx_destruct;
@end
