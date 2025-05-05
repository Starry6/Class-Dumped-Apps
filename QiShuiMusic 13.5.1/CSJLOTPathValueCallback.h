@interface CSJLOTPathValueCallback : NSObject
@property (nonatomic) r^{CGPath=} pathValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pathForFrame:startKeyframe:endKeyframe:interpolatedProgress:;
- (id)pathValue;
- (void)setPathValue:;
+ (id)withCGPath:;
@end
