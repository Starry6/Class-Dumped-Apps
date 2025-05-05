@interface CSJSplashControlSlideAreaModel : NSObject
@property (nonatomic) BOOL isLandScape;
@property (nonatomic) q topMargin;
@property (nonatomic) q leftMargin;
@property (nonatomic) q bottomMargin;
@property (nonatomic) q rightMargin;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIsLandScape:;
- (id)initWithLandScape:;
- (BOOL)isLandScape;
- (id)init;
- (void)setLeftMargin:;
- (id)toDictionary;
- (long long)leftMargin;
- (id)initWithCoder:;
- (long long)bottomMargin;
- (void)encodeWithCoder:;
- (long long)topMargin;
- (long long)rightMargin;
- (void)setRightMargin:;
- (void)setTopMargin:;
- (void)setBottomMargin:;
+ (BOOL)supportsSecureCoding;
+ (id)fromDictionary:;
@end
