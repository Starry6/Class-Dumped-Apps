@interface CSJLOTPathBlockCallback : NSObject
@property (nonatomic) @? callback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pathForFrame:startKeyframe:endKeyframe:interpolatedProgress:;
- (id)callback;
- (void)setCallback:;
- (void).cxx_destruct;
+ (id)withBlock:;
@end
