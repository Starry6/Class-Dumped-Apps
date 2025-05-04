@interface AWEHotSearchInfo : AWEBaseApiModel
@property (nonatomic) NSString sentence;
@property (nonatomic) NSString ailabExtra;
@property (nonatomic) NSString recExtra;
@property (nonatomic) NSString bizExtra;
@property (nonatomic) NSString logExtra;
- (void)setLogExtra:;
- (id)logExtra;
- (id)logExtraDictionary;
- (id)bizExtra;
- (void)setBizExtra:;
- (id)recExtra;
- (void)setRecExtra:;
- (id)ailabExtra;
- (void)setAilabExtra:;
- (void).cxx_destruct;
- (id)sentence;
- (void)setSentence:;
+ (id)JSONKeyPathsByPropertyKey;
@end
