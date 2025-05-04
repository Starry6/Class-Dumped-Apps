@interface AWEPublishCreateModelParamContext : NSObject
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) AWEPublishFlowModel flowModel;
@property (nonatomic) NSString resourceId;
@property (nonatomic) NSString originImageInfos;
- (id)resourceId;
- (id)publishViewModel;
- (void)setResourceId:;
- (void)setPublishViewModel:;
- (void)setFlowModel:;
- (id)flowModel;
- (id)originImageInfos;
- (void)setOriginImageInfos:;
- (void).cxx_destruct;
@end
