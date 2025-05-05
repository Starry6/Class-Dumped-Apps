@interface BWStillImageSemanticStyle : NSObject
@property (nonatomic) float toneBias;
@property (nonatomic) float warmthBias;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (float)warmthBias;
- (float)toneBias;
- (void)setToneBias:;
- (void)setWarmthBias:;
- (id)initWithSemanticStyle:;
@end
