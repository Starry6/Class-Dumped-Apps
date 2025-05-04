@interface AWEGDPreRequestTaskModel : NSObject
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSString bizCode;
@property (nonatomic) NSString cacheFrom;
@property (nonatomic) @? completion;
- (id)bizCode;
- (void)setBizCode:;
- (id)cacheFrom;
- (void)setCacheFrom:;
- (id)completion;
- (void)setCompletion:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
@end
