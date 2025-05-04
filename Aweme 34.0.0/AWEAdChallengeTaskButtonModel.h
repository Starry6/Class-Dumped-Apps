@interface AWEAdChallengeTaskButtonModel : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString tipText;
@property (nonatomic) NSString schema;
@property (nonatomic) NSNumber enable;
@property (nonatomic) BOOL visible;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tipText;
- (void)setTipText:;
- (id)schema;
- (id)enable;
- (BOOL)visible;
- (void)setSchema:;
- (void)setText:;
- (void)setVisible:;
- (id)text;
- (void).cxx_destruct;
- (void)setEnable:;
+ (id)JSONKeyPathsByPropertyKey;
@end
