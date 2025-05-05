@interface IESECLiveRedPackageRequest : IESECLiveAPIBaseRequest
@property (nonatomic) NSString adAdvID;
@property (nonatomic) NSString redPackageType;
- (id)adAdvID;
- (id)buildParams;
- (id)redPackageType;
- (void)setAdAdvID:;
- (void)setRedPackageType:;
- (void).cxx_destruct;
@end
