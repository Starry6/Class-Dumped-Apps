@interface IESLiveStackXMLNode : NSObject
@property (nonatomic) IESLiveStackXMLNode parentNode;
@property (nonatomic) NSMutableArray subNodes;
@property (nonatomic) NSString elementName;
@property (nonatomic) NSDictionary attributes;
@property (nonatomic) IESLiveStackDynamicRule rule;
@property (nonatomic) NSMutableArray productArray;
- (id)initWithElementName:;
- (id)productArray;
- (void)setProductArray:;
- (id)subNodes;
- (id)rule;
- (id)build;
- (void)setAttributes:;
- (id)attributes;
- (id)elementName;
- (void).cxx_destruct;
- (void)setRule:;
- (id)parentNode;
- (void)setParentNode:;
- (void)setElementName:;
@end
