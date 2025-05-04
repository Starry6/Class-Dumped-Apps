@interface AWEMusicStreamingImpl.LunaVideoLabelInfo : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) BOOL backgroundPlay;
- (BOOL)backgroundPlay;
- (void)setBackgroundPlay:;
- (id)initWithDictionary:error:;
- (id)init;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
