@interface IESECLiveTaskDetailResponse : IESECLiveApiBaseModel
@property (nonatomic) NSNumber duration;
@property (nonatomic) NSString uniqueID;
@property (nonatomic) NSString successMsg;
@property (nonatomic) NSString resource;
@property (nonatomic) NSDictionary data;
- (void)setSuccessMsg:;
- (id)successMsg;
- (id)uniqueID;
- (id)data;
- (void)setResource:;
- (void)setDuration:;
- (void)setUniqueID:;
- (void).cxx_destruct;
- (id)resource;
- (void)setData:;
- (id)duration;
+ (id)JSONKeyPathsByPropertyKey;
@end
