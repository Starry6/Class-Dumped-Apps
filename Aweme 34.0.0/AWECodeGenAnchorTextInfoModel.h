@interface AWECodeGenAnchorTextInfoModel : AWEBaseDataModel
@property (nonatomic) NSString content;
@property (nonatomic) AWECodeGenAnchorTextStyleModel textStyleModel;
@property (nonatomic) AWECodeGenAnchorTextBackGroundModel backGroundModel;
@property (nonatomic) AWECodeGenAnchorPreSeparatorModel preSeparatorModel;
@property (nonatomic) BOOL feedChange;
- (BOOL)feedChange;
- (id)textStyleModel;
- (void)setTextStyleModel:;
- (id)backGroundModel;
- (void)setBackGroundModel:;
- (id)preSeparatorModel;
- (void)setPreSeparatorModel:;
- (void)setFeedChange:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
