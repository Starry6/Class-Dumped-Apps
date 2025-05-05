@interface CalXMLAttributeRedactionRule : NSObject
@property (nonatomic) NSInteger attributeName;
@property (nonatomic) NSInteger attributeValue;
- (int)attributeValue;
- (void)setAttributeValue:;
- (int)attributeName;
- (void)setAttributeName:;
@end
