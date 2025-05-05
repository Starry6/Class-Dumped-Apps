@interface BDLynxTemplateConfig : BDLynxBaseConfig
@property (nonatomic) NSString cardID;
@property (nonatomic) NSString cardPath;
@property (nonatomic) NSString cardVersion;
@property (nonatomic) NSString desc;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) BOOL hasExtResource;
@property (nonatomic) NSArray extURLPrefix;
- (id)realURLForPath:;
- (void)setCardVersion:;
- (id)cardPath;
- (id)cardVersion;
- (id)dataForPath:;
- (id)extURLPrefix;
- (BOOL)hasExtResource;
- (void)setCardPath:;
- (void)setExtURLPrefix:;
- (void)setExtra:;
- (void)setHasExtResource:;
- (void)updateWithDictionary:;
- (id)extra;
- (id)desc;
- (void)setDesc:;
- (void).cxx_destruct;
- (id)cardID;
- (void)setCardID:;
@end
