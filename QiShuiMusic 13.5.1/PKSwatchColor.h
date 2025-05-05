@interface PKSwatchColor : NSObject
@property (nonatomic) UIColor color;
@property (nonatomic) NSString identifier;
- (id)identifier;
- (id)color;
- (void).cxx_destruct;
- (id)initWithColor:identifier:;
+ (id)swatchColor:identifier:;
@end
