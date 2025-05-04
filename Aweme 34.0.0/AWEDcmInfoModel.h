@interface AWEDcmInfoModel : AWEBaseApiModel
@property (nonatomic) NSString dcmId;
@property (nonatomic) NSDictionary dcmExtra;
- (id)dcmId;
- (void)setDcmId:;
- (id)dcmExtra;
- (void)setDcmExtra:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
