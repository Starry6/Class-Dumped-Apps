@interface IESGurdSettingsResourceConfigPipelineItem : NSObject
@property (nonatomic) q type;
@property (nonatomic) q updatePolicy;
@property (nonatomic) BOOL disableCache;
- (void)setType:;
- (BOOL)disableCache;
- (long long)type;
- (long long)updatePolicy;
- (void)setDisableCache:;
- (void)setUpdatePolicy:;
+ (id)configWithDictionary:;
@end
