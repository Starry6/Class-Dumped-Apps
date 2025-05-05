@interface ISBorderEffect : NSObject
@property (nonatomic) IFColor color;
@property (nonatomic) double lineWidth;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLineWidth:;
- (double)lineWidth;
- (void)setColor:;
- (id)color;
- (void).cxx_destruct;
- (id)filterWithBackgroundImage:inputImage:;
- (id)initWithLineWidth:color:;
@end
