@interface AWEHPRedDotUIConfig : MTLModel
@property (nonatomic) double start;
@property (nonatomic) double max;
@property (nonatomic) double min;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStart:;
- (BOOL)isValidWithError:;
- (void)setMax:;
- (double)max;
- (double)start;
- (double)min;
- (void)setMin:;
+ (id)JSONKeyPathsByPropertyKey;
@end
