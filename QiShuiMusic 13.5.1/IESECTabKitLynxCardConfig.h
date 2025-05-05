@interface IESECTabKitLynxCardConfig : NSObject
@property (nonatomic) NSString bundleURL;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) double preferredLayoutWidth;
@property (nonatomic) Q widthMode;
@property (nonatomic) double preferredLayoutHeight;
@property (nonatomic) Q heightMode;
- (unsigned long long)heightMode;
- (double)preferredLayoutHeight;
- (double)preferredLayoutWidth;
- (void)setExtra:;
- (void)setHeightMode:;
- (void)setPreferredLayoutHeight:;
- (void)setPreferredLayoutWidth:;
- (void)setWidthMode:;
- (unsigned long long)widthMode;
- (id)extra;
- (id)bundleURL;
- (void)setBundleURL:;
- (void).cxx_destruct;
@end
