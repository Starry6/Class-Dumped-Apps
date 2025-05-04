@interface AWECodeGenV1MateReportRateResponse : AWEBaseResponseModel
@property (nonatomic) NSInteger isCompleteMateObd;
@property (nonatomic) BOOL isShowStoryObd;
@property (nonatomic) BOOL isShowPopObd;
@property (nonatomic) BOOL isShowMateObd;
@property (nonatomic) BOOL isShowMatePublishObd;
@property (nonatomic) BOOL isShowPopRecommendObd;
@property (nonatomic) BOOL isShowCfCommentObd;
@property (nonatomic) BOOL isMomentTabMigrated;
- (BOOL)isMomentTabMigrated;
- (BOOL)isShowCfCommentObd;
- (int)isCompleteMateObd;
- (void)setIsCompleteMateObd:;
- (BOOL)isShowStoryObd;
- (void)setIsShowStoryObd:;
- (BOOL)isShowPopObd;
- (void)setIsShowPopObd:;
- (BOOL)isShowMateObd;
- (void)setIsShowMateObd:;
- (BOOL)isShowMatePublishObd;
- (void)setIsShowMatePublishObd:;
- (BOOL)isShowPopRecommendObd;
- (void)setIsShowPopRecommendObd:;
- (void)setIsShowCfCommentObd:;
- (void)setIsMomentTabMigrated:;
+ (id)JSONKeyPathsByPropertyKey;
@end
