@interface LOTSizeBlockCallback : NSObject
@property (nonatomic) @? callback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sizeForFrame:startKeyframe:endKeyframe:interpolatedProgress:startSize:endSize:currentSize:;
- (id)callback;
- (void)setCallback:;
- (void).cxx_destruct;
+ (id)withBlock:;
@end
