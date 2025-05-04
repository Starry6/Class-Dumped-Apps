@interface AWETokamakImageModel : NSObject
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) q footprint;
@property (nonatomic) q fileSize;
@property (nonatomic) q frameCount;
@property (nonatomic) NSURL url;
@property (nonatomic) UIView targetView;
@property (nonatomic) @ userInfo;
- (id)initWithURL:footprint:witdth:height:fileSize:targetView:frameCount:userInfo:;
- (id)targetView;
- (id)userInfo;
- (long long)width;
- (long long)fileSize;
- (void).cxx_destruct;
- (long long)frameCount;
- (long long)height;
- (long long)footprint;
- (id)url;
@end
