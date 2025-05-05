@interface ISBlurEffect : NSObject
@property (nonatomic) double radius;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRadius:;
- (double)radius;
- (id)initWithRadius:;
- (id)filterWithBackgroundImage:inputImage:;
@end
