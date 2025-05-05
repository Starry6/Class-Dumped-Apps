@interface ARLine : NSObject
@property (nonatomic) Q identifier;
@property (nonatomic)  startPoint;
@property (nonatomic)  endPoint;
- (id)endPoint;
- (void)setEndPoint:;
- (id)startPoint;
- (void)setStartPoint:;
- (unsigned long long)identifier;
- (void)setIdentifier:;
- (id)copyWithZone:;
@end
