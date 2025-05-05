@interface BDLynxChannelIOSConfig : BDLynxBaseConfig
@property (nonatomic) NSDictionary templateConfigMapper;
@property (nonatomic) NSArray templateList;
- (void)setTemplateConfigMapper:;
- (void)setTemplateList:;
- (id)templateConfigForCardID:;
- (id)templateConfigMapper;
- (id)templateList;
- (void)updateWithDictionary:;
- (void).cxx_destruct;
@end
