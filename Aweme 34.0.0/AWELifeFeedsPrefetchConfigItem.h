@interface AWELifeFeedsPrefetchConfigItem : NSObject
@property (nonatomic) NSArray schemaList;
@property (nonatomic) BOOL enablePrefetchData;
@property (nonatomic) BOOL enablePreloadContainer;
@property (nonatomic) NSDictionary lifeMallExtraParams;
- (id)schemaList;
- (BOOL)matchSchema:;
- (void)setSchemaList:;
- (BOOL)enablePrefetchData;
- (void)setEnablePrefetchData:;
- (BOOL)enablePreloadContainer;
- (void)setEnablePreloadContainer:;
- (id)lifeMallExtraParams;
- (void)setLifeMallExtraParams:;
- (void).cxx_destruct;
@end
