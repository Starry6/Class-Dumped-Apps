@interface AXDataPointValue : NSObject
@property (nonatomic) double number;
@property (nonatomic) NSString category;
- (double)number;
- (void)setNumber:;
- (void)setCategory:;
- (void).cxx_destruct;
- (id)description;
- (id)category;
- (id)copyWithZone:;
+ (id)valueWithNumber:;
+ (id)valueWithCategory:;
@end
