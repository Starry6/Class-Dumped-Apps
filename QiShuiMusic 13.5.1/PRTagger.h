@interface PRTagger : NLTagger
@property (nonatomic) Q orthoIndex;
- (id)initWithTagSchemes:orthoIndex:;
- (unsigned long long)orthoIndex;
@end
