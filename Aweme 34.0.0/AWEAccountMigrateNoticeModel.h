@interface AWEAccountMigrateNoticeModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) q migrateRejectStatus;
@property (nonatomic) NSString exportUserId;
@property (nonatomic) NSString importUserId;
@property (nonatomic) NSArray migrateTextArray;
@property (nonatomic) {CGSize=dd} messageSize;
@property (nonatomic) NSAttributedString attributedContent;
- (id)attributedContent;
- (void)setAttributedContent:;
- (long long)migrateRejectStatus;
- (void)setMigrateRejectStatus:;
- (id)exportUserId;
- (void)setExportUserId:;
- (id)importUserId;
- (void)setImportUserId:;
- (id)migrateTextArray;
- (void)setMigrateTextArray:;
- (void)analyzeAccountMigrateMessage;
- (id)content;
- (id)messageSize;
- (void)setMessageSize:;
- (void)setContent:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)migrateTextArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
