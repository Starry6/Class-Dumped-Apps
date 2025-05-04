@interface AWEIMCodeGenShareSourceAttrModel : AWEBaseDataModel
@property (nonatomic) q mode;
@property (nonatomic) BOOL canRetry;
@property (nonatomic) q reqInterval;
- (long long)reqInterval;
- (void)setCanRetry:;
- (void)setReqInterval:;
- (BOOL)canRetry;
- (void)setMode:;
- (long long)mode;
+ (id)JSONKeyPathsByPropertyKey;
@end
