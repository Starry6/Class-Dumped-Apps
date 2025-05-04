@interface AWECodeGenNoticeLabelModel : AWEBaseDataModel
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString text;
@property (nonatomic) NSString color;
@property (nonatomic) NSString url;
@property (nonatomic) AWECodeGenUrlModel iconModel;
@property (nonatomic) NSString labelTracking;
- (id)labelTracking;
- (void)setLabelTracking:;
- (void)setUrl:;
- (void)setText:;
- (id)color;
- (id)text;
- (void)setColor:;
- (int)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setIconModel:;
- (id)url;
- (id)iconModel;
+ (id)JSONKeyPathsByPropertyKey;
@end
