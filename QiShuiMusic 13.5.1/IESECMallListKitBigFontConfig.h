@interface IESECMallListKitBigFontConfig : NSObject
@property (nonatomic) BOOL bigFontEnabled;
@property (nonatomic) double fontSizeScale;
@property (nonatomic) BOOL hostCustomFontSizeEnabled;
@property (nonatomic) BOOL ipadCustomFontSizeEnabled;
@property (nonatomic) double sizeScale;
- (BOOL)bigFontEnabled;
- (BOOL)customFontSizeEnabled;
- (double)fontSizeScale;
- (BOOL)hostCustomFontSizeEnabled;
- (BOOL)ipadCustomFontSizeEnabled;
- (void)setBigFontEnabled:;
- (void)setFontSizeScale:;
- (void)setHostCustomFontSizeEnabled:;
- (void)setIpadCustomFontSizeEnabled:;
- (void)setSizeScale:;
- (double)sizeScale;
@end
