@interface IESECLiveEcLeavePageParamModel : IESLiveBridgeModel
@property (nonatomic) NSString pageId;
@property (nonatomic) BOOL canShowPendant;
@property (nonatomic) NSDictionary pendantEdgeInsets;
- (BOOL)canShowPendant;
- (id)pendantEdgeInsets;
- (void)setCanShowPendant:;
- (void)setPendantEdgeInsets:;
- (id)pageId;
- (void)setPageId:;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
