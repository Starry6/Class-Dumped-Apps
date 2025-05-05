@interface IESVideoBSGroupModel : MTLModel
@property (nonatomic) NSArray configArray;
@property (nonatomic) NSString defaultConfig;
@property (nonatomic) NSArray bitrateRange;
@property (nonatomic) NSNumber defaultBitrate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setConfigArray:;
- (id)bitrateRange;
- (id)configArray;
- (id)defaultBitrate;
- (void)setBitrateRange:;
- (void)setDefaultBitrate:;
- (id)defaultConfig;
- (void).cxx_destruct;
- (void)setDefaultConfig:;
+ (id)JSONKeyPathsByPropertyKey;
@end
