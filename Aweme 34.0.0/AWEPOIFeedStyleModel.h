@interface AWEPOIFeedStyleModel : MTLModel
@property (nonatomic) Q dataListStyle;
@property (nonatomic) Q titleUIStyle;
@property (nonatomic) Q titleHiddenStyle;
@property (nonatomic) Q maskViewStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)JSONValue;
- (unsigned long long)dataListStyle;
- (void)setDataListStyle:;
- (unsigned long long)titleUIStyle;
- (void)setTitleUIStyle:;
- (unsigned long long)titleHiddenStyle;
- (void)setTitleHiddenStyle:;
- (unsigned long long)maskViewStyle;
- (void)setMaskViewStyle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
