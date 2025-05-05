@interface WBSOpenSearchURLTemplateParameter : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString prefix;
@property (nonatomic) {_NSRange=QQ} range;
@property (nonatomic) BOOL optional;
- (void)setOptional:;
- (BOOL)isOptional;
- (void)setName:;
- (void)setRange:;
- (id)range;
- (void)setPrefix:;
- (id)prefix;
- (void).cxx_destruct;
- (id)name;
@end
