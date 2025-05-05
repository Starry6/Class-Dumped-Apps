@interface CADEntityWrapper : NSObject
- (id)objectID;
- (id)initWithCalEntity:;
- (id)initWithCalEntity:loadedValues:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)loadedValues;
+ (BOOL)supportsSecureCoding;
@end
