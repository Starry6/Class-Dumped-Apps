@interface AWERelatedVideoTagItem : MTLModel
@property (nonatomic) NSString tagName;
@property (nonatomic) double prob;
@property (nonatomic) NSNumber tagId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)setTagId:;
- (id)tagId;
- (id)tagName;
- (void)setTagName:;
- (double)prob;
- (void)setProb:;
+ (id)JSONKeyPathsByPropertyKey;
@end
