@interface AWEHPChannelBubbleShowResultModel : NSObject
@property (nonatomic) q showResult;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (long long)showResult;
- (void)setShowResult:;
- (id)extra;
- (id)description;
- (void).cxx_destruct;
+ (id)generateResultModelWithShowResult:extraInfo:;
@end
