@interface HTSLiveToolbarItemExtra : NSObject
@property (nonatomic) NSString jsonStr;
@property (nonatomic) NSString source;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) NSString schemaURL;
- (id)jsonStr;
- (id)schemaURL;
- (void)setJsonStr:;
- (void)setSchemaURL:;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
@end
