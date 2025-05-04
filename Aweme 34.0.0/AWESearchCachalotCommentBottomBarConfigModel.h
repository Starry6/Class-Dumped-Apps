@interface AWESearchCachalotCommentBottomBarConfigModel : NSObject
@property (nonatomic) NSNumber commentGroupId;
@property (nonatomic) NSNumber commentServiceId;
@property (nonatomic) NSString placeHolderText;
@property (nonatomic) NSDictionary cardTemplateDict;
@property (nonatomic) BOOL enableInsertNewestComment;
- (id)placeHolderText;
- (void)setPlaceHolderText:;
- (id)commentGroupId;
- (id)commentServiceId;
- (id)cardTemplateDict;
- (BOOL)enableInsertNewestComment;
- (void)setCommentGroupId:;
- (void)setCommentServiceId:;
- (void)setCardTemplateDict:;
- (void)setEnableInsertNewestComment:;
- (void).cxx_destruct;
@end
