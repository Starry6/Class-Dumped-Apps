@interface CSJLOTSizeValueCallback : NSObject
@property (nonatomic) {CGSize=dd} sizeValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sizeForFrame:startKeyframe:endKeyframe:interpolatedProgress:startSize:endSize:currentSize:;
- (id)sizeValue;
- (void)setSizeValue:;
+ (id)withPointValue:;
@end
