@interface CKGenericTemplateDetailRequestModel : CKBaseRequestModel
@property (nonatomic) NSString featureList;
@property (nonatomic) NSString templateVersion;
@property (nonatomic) NSString cutsameSDKVersion;
@property (nonatomic) BOOL showFilteredTemplates;
@property (nonatomic) NSString templateIds;
- (void)setTemplateIds:;
- (id)cutsameSDKVersion;
- (void)setCutsameSDKVersion:;
- (void)setShowFilteredTemplates:;
- (BOOL)showFilteredTemplates;
- (id)templateIds;
- (id)featureList;
- (void)setFeatureList:;
- (void).cxx_destruct;
- (id)templateVersion;
- (void)setTemplateVersion:;
@end
