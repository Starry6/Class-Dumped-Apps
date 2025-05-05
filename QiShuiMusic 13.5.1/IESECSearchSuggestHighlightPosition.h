@interface IESECSearchSuggestHighlightPosition : MTLModel
@property (nonatomic) q start;
@property (nonatomic) q end;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnd:;
- (void)setStart:;
- (long long)end;
- (long long)start;
+ (id)JSONKeyPathsByPropertyKey;
@end
