@interface AWEECOMIMChatListBizDataSourceManager : NSObject
@property (nonatomic) NSDictionary dataSourceDict;
@property (nonatomic) NSDictionary convTypeToDataSourceDictKey;
- (void)setDataSource:WithConvType:;
- (id)dataSourceWithConvType:;
- (id)allDataSource;
- (id)dataSourceDict;
- (void)setDataSourceDict:;
- (id)convTypeToDataSourceDictKey;
- (void)setConvTypeToDataSourceDictKey:;
- (id)init;
- (void).cxx_destruct;
@end
