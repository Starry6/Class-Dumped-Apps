@interface AWEGenericTemplateAIGCTaskTrackModel : NSObject
@property (nonatomic) NSString templateId;
@property (nonatomic) q duration;
@property (nonatomic) BOOL isUsingCache;
@property (nonatomic) NSError error;
- (BOOL)isUsingCache;
- (void)setIsUsingCache:;
- (void)setError:;
- (void)setDuration:;
- (void).cxx_destruct;
- (id)error;
- (long long)duration;
- (void)setTemplateId:;
- (id)templateId;
@end
