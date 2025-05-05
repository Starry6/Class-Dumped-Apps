@interface CSJLOTColorBlockCallback : NSObject
@property (nonatomic) @? callback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)colorForFrame:startKeyframe:endKeyframe:interpolatedProgress:startColor:endColor:currentColor:;
- (id)callback;
- (void)setCallback:;
- (void).cxx_destruct;
+ (id)withBlock:;
@end
