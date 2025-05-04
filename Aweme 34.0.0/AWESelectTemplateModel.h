@interface AWESelectTemplateModel : NSObject
@property (nonatomic) <ACCMVTemplateModelProtocol> tpModel;
@property (nonatomic) Q type;
@property (nonatomic) NSString meta;
- (id)tpModel;
- (void)setTpModel:;
- (id)meta;
- (void)setMeta:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
@end
