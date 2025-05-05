@interface UIPointerRegion : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rect;
@property (nonatomic) <NSObject> identifier;
@property (nonatomic) Q generationID;
@property (nonatomic) BOOL _isLatching;
@property (nonatomic) UIView referenceView;
@property (nonatomic) Q latchingAxes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setGenerationID:;
- (unsigned long long)generationID;
- (id)rect;
- (id)identifier;
- (unsigned long long)hash;
- (void)setLatchingAxes:;
- (void)setReferenceView:;
- (void)setRect:;
- (void).cxx_destruct;
- (BOOL)_isLatching;
- (id)referenceView;
- (id)description;
- (unsigned long long)latchingAxes;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)regionWithRect:identifier:;
@end
