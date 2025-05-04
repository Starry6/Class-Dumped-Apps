@interface AWECodeGenOrderEntranceSidebarDataModel : AWEBaseDataModel
@property (nonatomic) NSString modelID;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString schema;
@property (nonatomic) NSInteger bizId;
@property (nonatomic) NSInteger type;
- (id)schema;
- (void)setModelID:;
- (id)modelID;
- (void)setSchema:;
- (void)setSubTitle:;
- (id)subTitle;
- (int)type;
- (void)setType:;
- (void).cxx_destruct;
- (int)bizId;
- (void)setBizId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
