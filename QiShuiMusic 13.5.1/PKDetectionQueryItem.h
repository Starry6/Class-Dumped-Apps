@interface PKDetectionQueryItem : NSObject
@property (nonatomic) NSSet strokeIdentifiers;
@property (nonatomic) UIBezierPath baselinePath;
- (id)strokeIdentifiers;
- (id)baselinePath;
@end
