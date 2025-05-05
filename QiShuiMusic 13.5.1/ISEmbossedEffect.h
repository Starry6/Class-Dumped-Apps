@interface ISEmbossedEffect : NSObject
@property (nonatomic) {CGSize=dd} offset;
@property (nonatomic) double range;
@property (nonatomic) Q variant;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOffset:;
- (id)init;
- (void)setRange:;
- (void)setVariant:;
- (unsigned long long)variant;
- (id)offset;
- (double)range;
- (id)filterWithBackgroundImage:inputImage:;
@end
