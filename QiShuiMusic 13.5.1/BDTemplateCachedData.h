@interface BDTemplateCachedData : NSObject
@property (nonatomic) NSString templateKey;
@property (nonatomic) NSString detailKey;
@property (nonatomic) <NSCoding> data;
@property (nonatomic) double saveTime;
@property (nonatomic) double cacheDuration;
@property (nonatomic) NSArray tags;
- (void)setTemplateKey:;
- (double)cacheDuration;
- (id)detailKey;
- (double)saveTime;
- (void)setCacheDuration:;
- (void)setDetailKey:;
- (void)setSaveTime:;
- (id)templateKey;
- (id)init;
- (id)tags;
- (void)setTags:;
- (id)data;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setData:;
@end
