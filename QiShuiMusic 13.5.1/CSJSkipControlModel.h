@interface CSJSkipControlModel : NSObject
@property (nonatomic) Q position;
@property (nonatomic) q leftOrRightMargin;
@property (nonatomic) q topOrBottomMargin;
@property (nonatomic) q skipStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)leftOrRightMargin;
- (void)setLeftOrRightMargin:;
- (void)setSkipStyle:;
- (void)setTopOrBottomMargin:;
- (long long)skipStyle;
- (long long)topOrBottomMargin;
- (void)setPosition:;
- (unsigned long long)position;
- (id)init;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
+ (long long)_topOrBottomMarginDefaultValueWithPositon:;
+ (BOOL)supportsSecureCoding;
+ (id)fromDictionary:;
@end
