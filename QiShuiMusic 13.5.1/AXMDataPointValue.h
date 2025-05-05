@interface AXMDataPointValue : NSObject
@property (nonatomic) double number;
@property (nonatomic) NSString category;
@property (nonatomic) BOOL isEmptyValue;
- (double)number;
- (void)setNumber:;
- (void)setCategory:;
- (void).cxx_destruct;
- (id)description;
- (id)category;
- (id)copyWithZone:;
- (void)setIsEmptyValue:;
- (BOOL)isEmptyValue;
+ (id)valueWithNumber:;
+ (id)valueWithCategory:;
+ (id)emptyValue;
@end
