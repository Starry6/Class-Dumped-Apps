@interface AWESignatureEditCollectionModel : AWEBaseApiModel
@property (nonatomic) NSString hashTagName;
@property (nonatomic) AWEUserModel user;
- (id)hashTagName;
- (void)setHashTagName:;
- (id)user;
- (void)setUser:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
