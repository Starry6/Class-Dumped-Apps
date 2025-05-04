@interface AWETrackAddressRange : NSObject
@property (nonatomic) Q start;
@property (nonatomic) Q size;
@property (nonatomic) Q imageSlide;
@property (nonatomic) NSString imageName;
- (unsigned long long)imageSlide;
- (void)setImageSlide:;
- (void)setStart:;
- (void)setImageName:;
- (unsigned long long)size;
- (void).cxx_destruct;
- (void)setSize:;
- (id)imageName;
- (unsigned long long)start;
@end
