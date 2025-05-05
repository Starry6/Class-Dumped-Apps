@interface WBSRadarNewProblemURLBuilder : NSObject
@property (nonatomic) NSString componentName;
@property (nonatomic) NSString componentVersion;
@property (nonatomic) NSString title;
@property (nonatomic) NSString descriptionText;
@property (nonatomic) NSArray attachmentURLs;
@property (nonatomic) q classification;
@property (nonatomic) NSURL url;
- (id)componentName;
- (id)url;
- (id)descriptionText;
- (void)setTitle:;
- (long long)classification;
- (id)title;
- (void)setClassification:;
- (void).cxx_destruct;
- (void)setDescriptionText:;
- (void)setComponentName:;
- (id)componentVersion;
- (void)setComponentVersion:;
- (id)attachmentURLs;
- (void)setAttachmentURLs:;
@end
