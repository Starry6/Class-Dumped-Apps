@interface VEAlgorithmMVTemplate : NSObject
@property (nonatomic) q templateId;
@property (nonatomic) NSString tag;
@property (nonatomic) NSString style;
@property (nonatomic) NSString expr;
@property (nonatomic) NSString zipUrl;
@property (nonatomic) BOOL isCommon;
@property (nonatomic) Q source;
@property (nonatomic) NSArray videoSegs;
- (id)expr;
- (void)setExpr:;
- (void)setIsCommon:;
- (void)setVideoSegs:;
- (void)setZipUrl:;
- (id)videoSegs;
- (id)zipUrl;
- (id)tag;
- (void)setStyle:;
- (void)setTag:;
- (void).cxx_destruct;
- (unsigned long long)source;
- (id)style;
- (void)setSource:;
- (long long)templateId;
- (void)setTemplateId:;
- (BOOL)isCommon;
@end
