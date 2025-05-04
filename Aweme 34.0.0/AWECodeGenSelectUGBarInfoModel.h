@interface AWECodeGenSelectUGBarInfoModel : AWEBaseDataModel
@property (nonatomic) NSString barId;
@property (nonatomic) NSString text;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString clientExtra;
@property (nonatomic) NSString lynxExtra;
- (id)barId;
- (void)setBarId:;
- (id)clientExtra;
- (void)setClientExtra:;
- (id)lynxExtra;
- (void)setLynxExtra:;
- (id)schema;
- (void)setSchema:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
