@interface IESECLiveEcPostActionParamModel : IESLiveBridgeModel
@property (nonatomic) NSString action;
@property (nonatomic) NSNumber type;
@property (nonatomic) NSString pageId;
- (void)setType:;
- (id)action;
- (id)pageId;
- (void)setAction:;
- (id)type;
- (void)setPageId:;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
