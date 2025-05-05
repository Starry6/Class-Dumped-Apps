@interface NSTextTab : NSObject
@property (nonatomic) q alignment;
@property (nonatomic) double location;
@property (nonatomic) NSDictionary options;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (unsigned long long)tabStopType;
- (double)location;
- (id)release;
- (void)encodeWithCoder:;
- (id)options;
- (id)description;
- (id)initWithType:location:;
- (long long)alignment;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithTextAlignment:location:options:;
+ (id)allocWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)columnTerminatorsForLocale:;
@end
