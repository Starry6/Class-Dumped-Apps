@interface AWEPrfJatFastImageOpt : NSObject
@property (nonatomic) BOOL jatoEnabled;
@property (nonatomic) BOOL jatoSVGEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)jtfa_imageUUIDWithName:bundle:;
- (void)jtfa_loadImageErrorWithCode:description:;
- (void)themeDidChange:;
- (BOOL)jatoEnabled;
- (void)setJatoEnabled:;
- (BOOL)jatoSVGEnabled;
- (void)setJatoSVGEnabled:;
+ (id)shared;
@end
