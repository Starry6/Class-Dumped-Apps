@interface CSJLOTPointBlockCallback : NSObject
@property (nonatomic) @? callback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pointForFrame:startKeyframe:endKeyframe:interpolatedProgress:startPoint:endPoint:currentPoint:;
- (id)callback;
- (void)setCallback:;
- (void).cxx_destruct;
+ (id)withBlock:;
@end
