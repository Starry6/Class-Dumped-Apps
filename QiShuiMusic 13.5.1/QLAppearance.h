@interface QLAppearance : NSObject
@property (nonatomic) double topInset;
@property (nonatomic) double bottomInset;
@property (nonatomic) Q presentationMode;
@property (nonatomic) {UIEdgeInsets=dddd} peripheryInsets;
- (id)peripheryInsets;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)presentationMode;
- (double)bottomInset;
- (id)description;
- (double)topInset;
- (id)initWithTopInset:bottomInset:presentationMode:peripheryInsets:;
+ (BOOL)supportsSecureCoding;
@end
