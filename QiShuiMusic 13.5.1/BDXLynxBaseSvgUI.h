@interface BDXLynxBaseSvgUI : LynxUI
@property (nonatomic) NSString src;
@property (nonatomic) NSString content;
@property (nonatomic) LynxThreadSafeDictionary bdImageHolder;
- (void)applyImage:;
- (id)bdImageHolder;
- (void)layoutDidFinished;
- (id)loadImageFromHref:withSize:;
- (id)processSvgData:withSize:;
- (void)setBdImageHolder:;
- (void)setContent:requestReset:;
- (void)setSrc:requestReset:;
- (void)updateLayoutIfNeed;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)src;
- (void)setSrc:;
- (id)createView;
+ (id)__lynx_prop_config__860;
+ (id)__lynx_prop_config__961;
@end
