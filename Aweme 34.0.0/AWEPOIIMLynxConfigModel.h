@interface AWEPOIIMLynxConfigModel : NSObject
@property (nonatomic) NSString lynxURL;
@property (nonatomic) double enable;
@property (nonatomic) double blankWidth;
@property (nonatomic) double maxWidth;
@property (nonatomic) double height;
@property (nonatomic) double ratio;
- (id)lynxURL;
- (double)handlePointFiveValue:;
- (double)blankWidth;
- (double)enable;
- (double)maxWidth;
- (void).cxx_destruct;
- (double)height;
- (id)initWithDictionary:;
- (double)ratio;
+ (id)configWithDictionary:;
@end
