@interface AWELiveUploadMediaDataModel : IESLiveBridgeModel
@property (nonatomic) NSArray videoResultList;
@property (nonatomic) NSArray imageResultList;
@property (nonatomic) NSArray imageResultListV2;
@property (nonatomic) NSArray videoResultListV2;
- (id)videoResultList;
- (void)setVideoResultList:;
- (id)imageResultList;
- (void)setImageResultList:;
- (id)imageResultListV2;
- (void)setImageResultListV2:;
- (id)videoResultListV2;
- (void)setVideoResultListV2:;
- (void).cxx_destruct;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
