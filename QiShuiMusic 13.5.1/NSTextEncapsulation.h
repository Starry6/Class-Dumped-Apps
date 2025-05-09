@interface NSTextEncapsulation : NSObject
@property (nonatomic) Q scale;
@property (nonatomic) Q platterSize;
@property (nonatomic) Q shape;
@property (nonatomic) Q style;
@property (nonatomic) double lineWeight;
@property (nonatomic) double minimumWidth;
@property (nonatomic) UIColor color;
- (void)setShape:;
- (double)minimumWidth;
- (id)init;
- (void)dealloc;
- (void)setScale:;
- (void)setColor:;
- (unsigned long long)shape;
- (void)setMinimumWidth:;
- (void)setStyle:;
- (id)initWithCoder:;
- (id)initWithShape:;
- (id)color;
- (void)encodeWithCoder:;
- (unsigned long long)scale;
- (unsigned long long)style;
- (id)copyWithZone:;
- (unsigned long long)platterSize;
- (void)setPlatterSize:;
- (double)lineWeight;
- (void)setLineWeight:;
+ (BOOL)supportsSecureCoding;
@end
