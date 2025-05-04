@interface AWEIMEmojiResourcesListSearchResponseModel : MTLModel
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) AWEIMEmojiResourceSearchResponseModel resourceSearch;
@property (nonatomic) AWEIMEmojiStickerSearchResponseModel stickerSearch;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statusMsg;
- (void)setStatusMsg:;
- (id)resourceSearch;
- (void)setResourceSearch:;
- (id)stickerSearch;
- (void)setStickerSearch:;
- (id)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
