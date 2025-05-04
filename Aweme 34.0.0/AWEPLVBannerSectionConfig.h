@interface AWEPLVBannerSectionConfig : AWEBaseApiModel
@property (nonatomic) AWEPLVSectionPaddingModel padding;
@property (nonatomic) NSNumber cornerRadius;
@property (nonatomic) NSString sectionName;
- (id)padding;
- (void)setCornerRadius:;
- (void)setPadding:;
- (void).cxx_destruct;
- (id)cornerRadius;
- (void)setSectionName:;
- (id)sectionName;
+ (id)paddingJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
