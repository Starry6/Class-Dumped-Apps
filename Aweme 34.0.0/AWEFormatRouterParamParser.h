@interface AWEFormatRouterParamParser : JSONModel
@property (nonatomic) AWEFormatRouterParamExtra formatExtra;
@property (nonatomic) AWEFormatRouterParamEnter formatEnter;
@property (nonatomic) AWEFormatRouterParamSearch formatGeneralSearch;
@property (nonatomic) AWEFormatRouterParamIMChatList formatImChatList;
- (id)formatExtra;
- (id)formatGeneralSearch;
- (id)formatImChatList;
- (void)setFormatExtra:;
- (id)formatEnter;
- (void)setFormatEnter:;
- (void)setFormatGeneralSearch:;
- (void)setFormatImChatList:;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
