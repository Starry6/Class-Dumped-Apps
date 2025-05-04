@interface AWENearbyCardLayout : MTLModel
@property (nonatomic) double height;
@property (nonatomic) double topMargin;
@property (nonatomic) double bottomMargin;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHeight:;
- (double)bottomMargin;
- (double)height;
- (double)topMargin;
- (void)setBottomMargin:;
- (void)setTopMargin:;
+ (id)JSONKeyPathsByPropertyKey;
@end
