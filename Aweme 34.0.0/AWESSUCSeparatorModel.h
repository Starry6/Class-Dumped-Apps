@interface AWESSUCSeparatorModel : AWEBaseApiModel
@property (nonatomic) NSString separatorType;
@property (nonatomic) AWESSUCColorModel backgroundColor;
@property (nonatomic) AWESSUCSizeModel size;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (id)size;
- (void).cxx_destruct;
- (void)setSize:;
- (id)separatorType;
- (void)setSeparatorType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
