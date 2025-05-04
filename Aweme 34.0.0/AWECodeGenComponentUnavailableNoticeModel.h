@interface AWECodeGenComponentUnavailableNoticeModel : AWEBaseDataModel
@property (nonatomic) NSString header;
@property (nonatomic) NSString content;
@property (nonatomic) AWECodeGenComponentUnavailableButtonModel leftButtonModel;
@property (nonatomic) AWECodeGenComponentUnavailableButtonModel rightButtonModel;
- (id)leftButtonModel;
- (void)setLeftButtonModel:;
- (id)rightButtonModel;
- (void)setRightButtonModel:;
- (id)header;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (void)setHeader:;
+ (id)JSONKeyPathsByPropertyKey;
@end
