@interface AWEIMDanmakuEmoticonAnimateBackgroundConfig : MTLModel
@property (nonatomic) Q type;
@property (nonatomic) NSString headURLStr;
@property (nonatomic) AWEIMDanmakuEmoticonStretchImage middle;
@property (nonatomic) NSString tailURLStr;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)headURLStr;
- (void)setHeadURLStr:;
- (void)setMiddle:;
- (id)tailURLStr;
- (void)setTailURLStr:;
- (id)middle;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
