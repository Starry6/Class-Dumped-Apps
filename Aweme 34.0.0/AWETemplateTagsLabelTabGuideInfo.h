@interface AWETemplateTagsLabelTabGuideInfo : AWEBaseApiModel
@property (nonatomic) NSString tabID;
@property (nonatomic) NSString componentID;
@property (nonatomic) NSString replaceLabelText;
@property (nonatomic) NSString clientExtra;
- (id)clientExtra;
- (void)setClientExtra:;
- (void)setTabID:;
- (id)replaceLabelText;
- (void)setReplaceLabelText:;
- (void).cxx_destruct;
- (void)setComponentID:;
- (id)componentID;
- (id)tabID;
+ (id)JSONKeyPathsByPropertyKey;
@end
