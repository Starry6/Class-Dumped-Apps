@interface CRListOutputRegion : CRCompositeOutputRegion
@property (nonatomic) NSArray items;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)items;
- (unsigned long long)type;
- (id)layoutComponents;
- (id)regionsSuitableForDataDetectorOutput;
- (id)initWithListItems:;
+ (id)listsWithParagraphs:;
@end
