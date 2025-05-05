@interface INParameterImage : NSObject
@property (nonatomic) INParameter parameter;
@property (nonatomic) INImage image;
- (void).cxx_destruct;
- (id)image;
- (id)copyWithZone:;
- (id)initWithParameter:image:;
- (id)parameter;
@end
