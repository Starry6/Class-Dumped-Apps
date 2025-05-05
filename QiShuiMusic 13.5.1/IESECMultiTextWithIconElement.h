@interface IESECMultiTextWithIconElement : MTLModel
@property (nonatomic) double space;
@property (nonatomic) q leadingSpace;
@property (nonatomic) NSArray textWithIconElementList;
@property (nonatomic) BOOL isScrollable;
@property (nonatomic) Q alignStrategy;
@property (nonatomic) IESECActionDefine action;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)alignStrategy;
- (void)setAlignStrategy:;
- (void)setTextWithIconElementList:;
- (id)textWithIconElementList;
- (id)action;
- (void)setAction:;
- (void).cxx_destruct;
- (double)space;
- (long long)leadingSpace;
- (void)setLeadingSpace:;
- (BOOL)isScrollable;
- (void)setIsScrollable:;
- (void)setSpace:;
+ (id)textWithIconElementListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
