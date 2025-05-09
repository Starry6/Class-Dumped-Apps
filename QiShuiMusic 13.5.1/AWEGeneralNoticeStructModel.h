@interface AWEGeneralNoticeStructModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString hint;
@property (nonatomic) IESIMURLModel senderImageUrl;
@property (nonatomic) NSString senderImageUrlString;
@property (nonatomic) NSString senderName;
@property (nonatomic) NSString schemaUrl;
@property (nonatomic) NSString schemaText;
@property (nonatomic) q taskId;
@property (nonatomic) IESIMURLModel imageUrl;
@property (nonatomic) q showStyle;
@property (nonatomic) NSString message_extra;
@property (nonatomic) AWEGeneralActionStructModel actionStruct;
@property (nonatomic) BOOL isUnfolded;
- (id)actionStruct;
- (BOOL)contentHasBigImage;
- (BOOL)contentHasNoImage;
- (BOOL)isUnfolded;
- (id)message_extra;
- (id)schemaText;
- (id)schemaUrl;
- (id)senderImageUrl;
- (id)senderImageUrlString;
- (void)setActionStruct:;
- (void)setIsUnfolded:;
- (void)setMessage_extra:;
- (void)setSchemaText:;
- (void)setSchemaUrl:;
- (void)setSenderImageUrl:;
- (void)setSenderImageUrlString:;
- (void)setShowStyle:;
- (long long)showStyle;
- (id)content;
- (void)setContent:;
- (id)init;
- (void)setTitle:;
- (long long)taskId;
- (id)title;
- (void).cxx_destruct;
- (id)imageUrl;
- (void)setImageUrl:;
- (void)setTaskId:;
- (id)senderName;
- (void)setHint:;
- (id)hint;
- (void)setSenderName:;
+ (id)actionStructJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)imageUrlJSONTransformer;
+ (id)noticeArrayJSONTransformer;
+ (id)senderImageUrlJSONTransformer;
+ (id)showStyleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
