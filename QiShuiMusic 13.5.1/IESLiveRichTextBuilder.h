@interface IESLiveRichTextBuilder : NSObject
@property (nonatomic) NSDictionary attributes;
@property (nonatomic) NSArray richTextModels;
- (id)p_build;
- (void)buildAttributedString:;
- (id)buildFromCache;
- (id)p_buildAttributesFrom:;
- (void)p_loadAllImagesIfNeeded:;
- (id)richTextModels;
- (void)setRichTextModels:;
- (id)init;
- (void)setAttributes:;
- (id)attributes;
- (void).cxx_destruct;
@end
