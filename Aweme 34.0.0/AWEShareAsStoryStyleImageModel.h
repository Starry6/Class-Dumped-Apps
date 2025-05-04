@interface AWEShareAsStoryStyleImageModel : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) AWEShareAsStoryStyleFrameModel frameModel;
- (id)frameModel;
- (void)setFrameModel:;
- (id)path;
- (void).cxx_destruct;
- (void)setPath:;
- (id)initWithPath:rect:;
+ (id)modelCustomPropertyMapper;
+ (id)initWithPath:rect:;
@end
