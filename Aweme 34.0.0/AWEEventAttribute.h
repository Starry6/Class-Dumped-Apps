@interface AWEEventAttribute : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) @ value;
- (id)equalTo;
- (id)value;
- (void)setValue:;
- (void)equalTo:;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)setName:;
- (id)name;
+ (id)attributeNamed:value:;
@end
