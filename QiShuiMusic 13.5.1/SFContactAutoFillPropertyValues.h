@interface SFContactAutoFillPropertyValues : NSObject
@property (nonatomic) q selectedIndex;
@property (nonatomic) SFContactAutoFillValue selectedValue;
@property (nonatomic) NSArray values;
@property (nonatomic) NSString property;
- (id)property;
- (id)values;
- (long long)selectedIndex;
- (void).cxx_destruct;
- (void)setSelectedIndex:;
- (id)initWithValues:property:;
- (id)selectedValue;
@end
