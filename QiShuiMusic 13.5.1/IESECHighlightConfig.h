@interface IESECHighlightConfig : MTLModel
@property (nonatomic) q startIndex;
@property (nonatomic) q endIndex;
@property (nonatomic) IESECTextStyle highlightStyle;
@property (nonatomic) IESECLinkConfig link;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)link;
- (void)setLink:;
- (void)setStartIndex:;
- (long long)startIndex;
- (void).cxx_destruct;
- (void)setEndIndex:;
- (long long)endIndex;
- (id)highlightStyle;
- (void)setHighlightStyle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
