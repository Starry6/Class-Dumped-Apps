@interface BDIMetaModel : NSObject
@property (nonatomic) BOOL debug;
@property (nonatomic) NSString publicPath;
@property (nonatomic) NSDictionary externals;
- (id)publicPath;
- (void)setPublicPath:;
- (void)setValue:forKey:;
- (void)setDebug:;
- (BOOL)debug;
- (void)setValue:forUndefinedKey:;
- (void).cxx_destruct;
- (id)externals;
- (void)setExternals:;
@end
